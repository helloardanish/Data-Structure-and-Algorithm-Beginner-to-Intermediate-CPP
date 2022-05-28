## Find no of connected graph using BFS. Connected graph means how many graph are there where all vertex are not connected and instead a separate graph is created.

#### Idea: Iterate over the visited array to check if all the index has been visited or not. If not call the fucntion for that index.

![Disconnected Graph](/src/images/dfs_disconnected_graph.png)

## Solution

```cpp

#include <iostream>
#include <queue>

using namespace std;

void printGraphBFS(vector<vector<int>> matrix, int sv, vector<bool> &visited){
  int n = matrix.size();
  queue<int> q;
  q.push(sv);
  visited[sv] = true;
  
  while(!q.empty()){
    int cv = q.front();
    q.pop();
    cout <<cv<<endl;
    for(int i=0; i<n; i++){
      if(matrix[cv][i]==1 && visited[i]==false){
        q.push(i);
        visited[i] = true;
      }
    }
  }
}

void printGraphDFS(vector<vector<int>> matrix, int sv, vector<bool> &visited){
  cout<<sv<<endl;
  visited[sv] = true;
  int n = matrix.size();
  for(int i=0; i<n; i++){
    if(matrix[sv][i]==1 && visited[i]==false){
      printGraphDFS(matrix, i, visited);
    }
  }
}


void DFS(vector<vector<int>> v, int &cc){
  int n = v.size();
  vector<bool> visited(n, false);
  for(int i=0; i<n; i++){
    if(visited[i]==false){
      cc++;
      printGraphDFS(v, i, visited);
    }
  }
}


void BFS(vector<vector<int>> v, int &conncompBFS){
  int n = v.size();
  vector<bool> visited(n, false);
  for(int i=0; i<n; i++){
    if(visited[i]==false){
      conncompBFS++;      
      printGraphBFS(v, i, visited);
    }
  }
}


int main(){
  int v,e;
  cin>>v>>e;
  vector<vector<int>> matrix(v, vector<int>(v,0));
  
  for(int i=1; i<=e;i++){
    int fv,sv;
    cin>>fv>>sv;
    matrix[fv][sv]=1;
    matrix[fv][sv]=1;
  }

  
  cout << "Print Using DFS:" << endl;
  int conncompDFS = 0;
  
  DFS(matrix, conncompDFS);

  cout << "No of connected component : " << conncompDFS <<endl;


  cout << "\n\n\nPrint Using BFS:" << endl;
  int conncompBFS = 0;
  BFS(matrix, conncompBFS);

  cout << "No of connected component : " << conncompBFS <<endl;
  
  return 0;
}

/* Input

12
12
0 1
0 3
1 2
1 3
2 4
2 5
3 4
4 5
6 7
7 8
9 10
10 11

*/


```

### Output

Print Using DFS:


0

1

2

4

5

3

6

7

8

9

10

11

No of connected component : 3



Print Using BFS:

0

1

3

2

4

5

6

7

8

9

10

11

No of connected component : 3



## Happy Coding,
# A R

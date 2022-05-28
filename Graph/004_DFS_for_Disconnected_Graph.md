## DFS For Disconnected Grpah

#### Idea: Iterate over the visited array to check if all the index has been visited or not. If not call the fucntion for that index.

![Disconnected Graph](src/images/dfs_disconnected_graph.png)

## Solution

```cpp

#include <iostream>
#include <queue>

using namespace std;

void printGraphBFS(vector<vector<int>> matrix, int sv){
  int n = matrix.size();
  vector<bool> visited(n,false);
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

  
  // DFS Function call
  cout << "Print Using DFS:" << endl;
  vector<bool> visited(v, false);
  for(int i=0; i<v; i++){
    if(visited[i]==false){
      printGraphDFS(matrix, i, visited);
    }
  }
  
  
  cout << "Print Using BFS:" << endl;
  cout << "It will only print first connected graph and ignore other disconnected graph" << endl;
  printGraphBFS(matrix, 0);
  
  return 0;
}

```

#### Input and Output

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

Print Using BFS:

It will only print first connected graph and ignore other disconnected graph

0

1

3

2

4

5


#### As you can see BFS isn't working for disconnected graph. Will code in next post for BFS.



You can also create a separate function for DFS and you just pass matrix. This will work too.


#### Another trick
```cpp
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void bfsPrint(vector<vector<int> > v, int sv){
    int n = v.size();
     vector<bool> visited(n,false);
     queue<int> q;
     q.push(sv);
     visited[sv] = true;

     while(!q.empty()){
        int cv = q.front();
        q.pop();
        cout<<cv<<endl;
        for(int i=0;i<n;i++){
            if(v[cv][i] && !visited[i]){
                q.push(i);
                visited[i] = true;
            }
        }
     }
}

void printDFS(vector<vector<int> > v, int sv, vector<bool> &visited){
    cout<<sv<<endl;
    visited[sv] = true;
    int n = v.size();
    for(int i=0;i<n;i++){
        if(v[sv][i] == 1 && visited[i]==false){
            printDFS(v,i, visited);
        }
    }
}

void DFS(vector<vector<int> > matrix){
    int n = matrix.size();
    vector<bool> visited(n,false);
    for(int i=0;i<n;i++){
        if(!visited[i]){
            printDFS(matrix,i,visited);
        }
    }

}
int main(){
   int n,e;
   cin>>n>>e;

   vector<vector<int> > matrix(n,vector<int>(n,0));

   for(int i=1;i<=e;i++){
    int fv,sv;
    cin>>fv>>sv;
    matrix[fv][sv] = 1;
    matrix[sv][fv] = 1;
   }


   cout<<"DFS "<<endl;
   DFS(matrix);

   cout<<"BFS"<<endl;
   ///bfsPrint(matrix,0);
   return 0;
}
```


### Hope it helped :)
### Happy Coding
## A R

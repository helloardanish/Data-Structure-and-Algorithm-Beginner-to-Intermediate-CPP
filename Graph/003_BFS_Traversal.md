## Print using BFS


##### Graph structure


![Graph Pictures](/src/images/autodraw_5_28_2022.png)


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

  vector<bool> visited(v, false);

  cout << "Print Using DFS:" << endl;
  printGraphDFS(matrix, 0, visited);


  cout << "Print Using BFS:" << endl;
  printGraphBFS(matrix, 0);
  
  return 0;
}


*/


Input and output

8
13
0 1
0 5
0 6
1 2
2 3
2 5
3 4
3 5
4 5
4 6
4 7
5 6
6 7
Print Using DFS:
0
1
2
3
4
5
6
7
Print Using BFS:
0
1
5
6
2
7
3
4

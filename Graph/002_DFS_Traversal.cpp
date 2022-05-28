#include <iostream>
#include <queue>

using namespace std;

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
  printGraphDFS(matrix, 0, visited);
  return 0;
}

/* Input & output

4  
5
0 1
0 3
1 2 
1 3
2 3
0
1
2
3

*/

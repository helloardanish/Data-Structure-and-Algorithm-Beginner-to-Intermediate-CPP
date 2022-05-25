#include <iostream>
#include <queue>

using namespace std;

void kSortedArray(int * inputarr, int n, int k){
  priority_queue<int> pq;
  for(int i=0; i<k; i++){
    pq.push(inputarr[i]);
  }
  int s=0;
  for(int i=k; i<n; i++){
    inputarr[s] = pq.top();
    pq.pop();
    s++;
    pq.push(inputarr[i]);
  }

  while(!pq.empty()){
    inputarr[s] = pq.top();
    pq.pop();
    s++;
  }
}

int main(){
  int input[] = {10, 12, 6, 7, 5};
  int k=3;
  kSortedArray(input, 5, k);

  for(int i=0; i<5; i++){
    cout << input[i] << " ";
  }
  cout << endl;
}

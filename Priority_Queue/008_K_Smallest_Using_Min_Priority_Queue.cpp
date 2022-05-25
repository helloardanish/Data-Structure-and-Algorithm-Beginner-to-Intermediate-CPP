#include<bits/stdc++.h>
using namespace std;

void ksmallest(int *a,int n,int k){
   /*priority_queue<int,vector<int> ,greater<int> > pq; /// min
   for(int i=0;i<n;i++){
    pq.push(a[i]);
   }*/
      priority_queue<int,vector<int> ,greater<int> > pq(a,a+n); /// min O(N)


   /// pop k elements
   for(int i=1;i<=k;i++){
    cout<<pq.top()<<" ";
    pq.pop();
   }

}
void ksmallest2(int *a,int n,int k){
   priority_queue<int> pq;
   /*for(int i=0;i<k;i++){
    pq.push(a[i]);
   }

   for(int i=k;i<n;i++){
    if(a[i] < pq.top()){
        pq.pop();
        pq.push(a[i]);
    }
   }

   /// Answer k elements
   while(!pq.empty()){
    cout<<pq.top()<<" ";
    pq.pop();
   }*/

   for(int i=0;i<n;i++){
    pq.push(a[i]);
    if(pq.size() > k){
        pq.pop();  /// largest element will be deleted
    }
   }

   /// k elements
   while(!pq.empty()){
    cout<<pq.top()<<" ";
    pq.pop();
   }
}
int main(){
   int a[] = {5,6,9,12,3,13,2};
   ksmallest(a,7,3);

   return 0;
}

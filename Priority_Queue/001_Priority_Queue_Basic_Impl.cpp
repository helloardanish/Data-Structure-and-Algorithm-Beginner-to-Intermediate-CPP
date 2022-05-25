#include<iostream>
using namespace std;

class PriorityQueue{
  vector<int> pq;
  public:
      PriorityQueue(){
      
      }
      bool isEmpty(){
          return pq.size()==0 ;
      }
      
      /// Return size of priority queue - no of elements present
      int getSize(){
         return pq.size();
      }
      
      int getMin(){
         if(isEmpty){
            return 0;  /// pq is empty
         }
         return pq[0];
      }
};
int main(){

   return 0;
}

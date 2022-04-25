#include <iostream>
#include <vector>

using namespace std;
int main() {
  vector<int> myarr {12,44,6,65,7,4,34,56};
  for(int i=1; i<myarr.size(); i++){
    myarr[i-1] = myarr[i];
  }

  cout << "After deleting first element:" << endl ;
  for(auto x:myarr){
    cout << x << " ";
  }

  
}

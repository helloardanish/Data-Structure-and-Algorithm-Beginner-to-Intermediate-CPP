#include <iostream>
#include <ctime> // we can use this one too

using namespace std;

void findastringinarraylist(string (&inparr)[1000]){
  //int arrlen =  sizeof(inparr)/sizeof(inparr[0]);
  for(int i=0; i<sizeof(inparr)/sizeof(inparr[0]); i++){
    if(inparr[i]=="Hello"){
      cout << "Hello found" << endl;
    }
  }
}

int main() {
  const clock_t begin_time = clock();
  // the work...
  
  string my_arr[1000];
  for (int i =0; i<1000; i++){
  my_arr[i] = "Hello";
  }
  
  
  findastringinarraylist(my_arr);

  // work end.
  float timetaken = float( clock () - begin_time ) /  CLOCKS_PER_SEC;
  cout << "time taken "<< timetaken << " second" << endl;
  cout << "Exit!\n";
}

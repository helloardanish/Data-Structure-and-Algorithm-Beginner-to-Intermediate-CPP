#include <iostream>
#include <chrono> // for time calculation

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

  auto t_start = std::chrono::high_resolution_clock::now();
  // the work...
  
  string my_arr[1000];
  for (int i =0; i<1000; i++){
  my_arr[i] = "Hello";
  }
  
  /*
  for (int i=0; i<sizeof(my_arr)/sizeof(string); i++){
    cout << my_arr[i] << endl;
  }
  */
  
  findastringinarraylist(my_arr);

  // work end.
  auto t_end = std::chrono::high_resolution_clock::now();
  double elapsed_time_ms = std::chrono::duration<double, std::milli>(t_end-t_start).count();
  cout << "time taken "<< elapsed_time_ms << endl;
  cout << "Exit!\n";
}

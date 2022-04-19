// passing array as input



#include <iostream>

using namespace std;

void findastringinarraylist(string (&inparr)[100]){
  //int arrlen =  sizeof(inparr)/sizeof(inparr[0]);
  for(int i=0; i<sizeof(inparr)/sizeof(inparr[0]); i++){
    if(inparr[i]=="Hello"){
      cout << "Hello found" << endl;
    }
  }
}

int main() {
  
  string my_arr[100];
  for (int i =0; i<100; i++){
  my_arr[i] = "Hello";
  }
  
  /*
  for (int i=0; i<sizeof(my_arr)/sizeof(string); i++){
    cout << my_arr[i] << endl;
  }
  */
  
  findastringinarraylist(my_arr);
  
  cout << "Exit!\n";
}






// same program using template




#include <iostream>

using namespace std;

template <size_t n>
void findastringinarraylist(string (&inparr)[n]){
  //int arrlen =  sizeof(inparr)/sizeof(inparr[0]);
  for(int i=0; i<sizeof(string)*n; i++){
    if(inparr[i]=="Hello"){
      cout << "Hello found" << endl;
    }
    cout << "i valus is " << i << "\n" << endl;
  }
}

int main() {
  
  string my_arr[100];
  for (int i =0; i<100; i++){
  my_arr[i] = "Hello";
  }
  
  /*
  for (int i=0; i<sizeof(my_arr)/sizeof(string); i++){
    cout << my_arr[i] << endl;
  }
  */
  
  findastringinarraylist(my_arr);
  
  cout << "Exit!\n";
}






// same using extra typename


#include <iostream>

using namespace std;

template <typename T, size_t n>

void findastringinarraylist(T (&inparr)[n]){
  //int arrlen =  sizeof(inparr)/sizeof(inparr[0]);
  for(int i=0; i<sizeof(T)*n; i++){
    if(inparr[i]=="Hello"){
      cout << "Hello found" << endl;
    }
    cout << "i valus is " << i << "\n" << endl;
  }
}

int main() {
  
  string my_arr[100];
  for (int i =0; i<100; i++){
  my_arr[i] = "Hello";
  }
  
  /*
  for (int i=0; i<sizeof(my_arr)/sizeof(string); i++){
    cout << my_arr[i] << endl;
  }
  */
  
  findastringinarraylist(my_arr);
  
  cout << "Exit!\n";
}

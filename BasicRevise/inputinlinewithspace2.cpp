// just a bit modification
// if blank input given exit the loop

#include <iostream>

using namespace std;

void printstring(string inp){
  cout << "Your input is ";
    cout << inp << endl;
}

void inputwithoutspace(){
  cout << "inputwithoutspace method called!" << endl;
  string inp;
  while(cin >> inp){
    if(!inp.empty()){
      printstring(inp);
    }else{
      break;
    }
  }
}

void inputwithspace(){
  cout << "inputwithspace method called!" << endl;
  string inp;
  while(getline(cin, inp)){
    if(inp.empty()){
      break;
    }
    printstring(inp);
  }
}
int main() {

  // 1st method
  //inputwithoutspace();

  //2nd method
  inputwithspace();
  
  return 0;
}

/*

// You can't run both method at the same time  as we are using infinite input
// comment any one method to use another one

// use ctrl + c to stop the running program

// Output 1st one >> first line is input

inputwithoutspace method called!
a
Your input is a
ar
Your input is ar
danish
Your input is danish
a r
Your input is a
Your input is r
a r danish
Your input is a
Your input is r
Your input is danish
^Csignal: interrupt








// Output 2nd one >> first line is input

inputwithspace method called!
a
Your input is a
ar
Your input is ar
danish
Your input is danish
a r
Your input is a r
a r danish
Your input is a r danish
^Csignal: interrupt


*/

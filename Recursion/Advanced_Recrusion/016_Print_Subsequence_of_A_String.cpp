// Print all subsequence of a given string

// input abc >> output a,b,c,ab,bc,ac,abc (all 8(2^length of string, one will last empty string which is null base condition) subsequence)
// originally we can say the answer will always be 2^length of string - 1


#include <iostream>

using namespace std; 

void printSubsequence(string inp, string out){
  if(inp.length()==0){
    cout << out << endl;
    return;
  }
  // two choice exclude and include
  printSubsequence(inp.substr(1),out); // exclude
  printSubsequence(inp.substr(1),out+inp[0]); // include
}

int main(){
  string input = "abcd";
  string output="";
  printSubsequence(input, output);
  cout << endl;
}


// print from last to first null value


#include <iostream>

using namespace std; 

void printSubsequence(string inp, string out){
  if(inp.length()==0){
    cout << out << endl;
    return;
  }
  // two choice exclude and include
  printSubsequence(inp.substr(1),out+inp[0]); // include
  printSubsequence(inp.substr(1),out); // exclude
}

int main(){
  string input = "abc";
  string output="";
  printSubsequence(input, output);
  cout << endl;
}



// using array


#include <iostream>

using namespace std; 

void printSubsequence(char inp[], char out[], int i){
  if(inp[0]=='\0'){
    out[i] = '\0';
    cout << out << endl;
    return;
  }
  out[i] = inp[0];
  // two choice exclude and include
  printSubsequence(inp+1,out, i+1); // include
  printSubsequence(inp+1,out, i); // exclude
}

int main(){
  char inp[] = "abc";
  char out[10];
  printSubsequence(inp, out, 0);
  cout << endl;
}

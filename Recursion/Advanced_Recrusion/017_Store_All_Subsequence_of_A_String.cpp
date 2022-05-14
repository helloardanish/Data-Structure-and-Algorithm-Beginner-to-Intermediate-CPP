// Store all the subsequence of a string

// input abc >> output a,b,c,ab,bc,ac,abc (all 8(2^length of string, one will last empty string which is null base condition) subsequence)
// originally we can say the answer will always be 2^length of string - 1
// we have to store it not print it



#include <iostream>
#include <vector>

using namespace std; 

void storeSubsequence(string inp, string out, vector<string> &outarr){
  if(inp.length()==0){
    //cout << out << endl;
    outarr.push_back(out);
    return;
  }
  // two choice exclude and include
  storeSubsequence(inp.substr(1),out, outarr); // exclude
  storeSubsequence(inp.substr(1),out+inp[0], outarr); // include
}

int main(){
  string input = "abc";
  string output="";
  vector<string> outarr;
  storeSubsequence(input, output, outarr);
  for(auto x:outarr){
    cout << x << "  ";
  }
  cout << endl;
}

// convert a given string into a integer number

// input "12345" >> output 12345

// because we know char - char is integer. so we can decrease character '5'-'0' and it'll give me integer 5.
// use recursively for all the string character

#include <iostream>
#include <vector>

using namespace std; 


int lengthofarr(char input[]){
  if(input[0]=='\0'){
    return 0;
  }
  return 1+lengthofarr(input+1);
}


int converStringtoInteger(char input[], int n){
  if(n==0){
    return 0;
  }
  int smallans = converStringtoInteger(input, n-1);
  int lastindex = input[n-1]-'0'; // it will give integer value
  int ans = smallans*10+lastindex;
  return ans;
}
int main(){
  char input[] = "12345";
  int len = lengthofarr(input);
  
  converStringtoInteger(input, len);
  cout << input;
  cout << endl;
}



// or use single line to do all that


#include <iostream>
#include <vector>

using namespace std; 


int lengthofarr(char input[]){
  if(input[0]=='\0'){
    return 0;
  }
  return 1+lengthofarr(input+1);
}


int converStringtoInteger(char input[], int n){
  if(n==0){
    return 0;
  }
  return (input[n-1]-'0') + converStringtoInteger(input, n-1)*10;
}
int main(){
  char input[] = "12346575";
  int len = lengthofarr(input);
  
  converStringtoInteger(input, len);
  cout << input;
  cout << endl;
}



// it will work only for specific inputs

// if input will be "-2324", "+1242", "wfq3431", "12331dw", "12435342535352523525325"(string can hold large character, integer will be out of range).
// Above code will not be able to handle these cases. So we assume input will be given only numcharacter.

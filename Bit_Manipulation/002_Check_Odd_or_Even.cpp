// check if given number is odd or even using bitwise operators

/*
Idea:

All the odd number will have last bit as 1.
All the even number will have last bit as 0.

2 : 10, 3 : 11, 4 : 100, 5 : 101, 6 : 110, 7 : 111.

Goes on.....

So we can say only last bit decides whether the number is odd or even else every number is even.


*/

#include<iostream>

using namespace std;

int main(){
  int x;
  cin >>x;

  if(x&1){ // find the last bit
    cout << "Odd" << endl;
  }else{
    cout << "Even" << endl;
  }
  return 0;
}



// or check with 0 of you want

// Hehe, actually you can't. Let me explain why?

#include<iostream>

using namespace std;

int main(){
  int x;
  cin >>x;

  if(!(x&0)){ // find the last bit
    // This condition will always be true for every number
    cout << "Even" << endl;
  }else{
    cout << "Odd" << endl;
  }
  return 0;
}




// or this code


#include<iostream>

using namespace std;

int main(){
  int x;
  cin >>x;

  if(x&0){ // find the last bit
    // This condition will always be false for every number and never execute
    cout << "Even" << endl;
  }else{
    cout << "Odd" << endl;
  }
  return 0;
}



// Only first gonna work :)

// Hope you get it.

// A R

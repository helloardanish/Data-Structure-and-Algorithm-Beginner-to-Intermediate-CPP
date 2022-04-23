#include <iostream>
#include<string>
#include <cstring>
using namespace std;

int main() {
  const int size=15;

  char name1[size];
  char name2[size] = "Hello AR";
  cin >> name1;
  cout << "Your name is " << name1
    << ". It has "<< strlen(name1) << " letters and stored in " 
    << sizeof(name1)<< " bytes.";
  name2[4] = '\0'; // rest letter will be ignored
  cout <<"\n First 3 character of name2 : " <<name2 << endl;

  string str1(15, 'A');
  cout << "mystr : " << str1 << endl;
  string str2;
  char char1[10];
  char char2[10] = "A";
  str2 = str1; //copy str1 to str2
  strcpy(char1, char2); // copy char2 to char1
  
  str2 +="RRRRRRR"; // Concatenate
  strcat(char1, " R"); // Concatenate

  int len1 = str2.size(); // calulate length
  int len2 = strlen(char1); // calulate length

  cout << R"(Let see "A R", will he perform today"\n" or not!)" << '\n';
  cout << R"+*("(He wouldn't?)", I know.)+*" << endl;

  return 0;
}

/*

// output


ar
Your name is ar. It has 2 letters and stored in 15 bytes.
 First 3 character of name2 : Hell
mystr : AAAAAAAAAAAAAAA
Let see "A R", will he perform today"\n" or not!
"(He wouldn't?)", I know.
*/

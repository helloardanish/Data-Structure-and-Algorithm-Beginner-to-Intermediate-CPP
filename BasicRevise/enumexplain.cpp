// Enumeration


/*

enum spectrum {red, orange, yellow, green, blue, violet, indigo, ultraviolet};

It makes spectrum the name of a new type; spectrum is termed an enumeration, much as a struct variable is called a structure.
It establishes red, orange, yellow,and so on,as symbolic constants for the integer values 0–7.These constants are called enumerators.


The only valid values that you can assign to an enumeration variable without a typecast are the enumerator values used in defining the type.Thus, we have the following:
band = blue; // valid, blue is an enumerator
band = 2000; // invalid, 2000 not an enumerator


You can assign an int value to an enum, provided that the value is valid and that you use an explicit type cast:
band = spectrum(3); // typecast 3 to type spectrum



You can set enumerator values explicitly by using the assignment operator:
enum bits{one = 1, two = 2, four = 4, eight = 8};

*/


#include <iostream>
using namespace std;

enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main()
{
    week today;
    today = Wednesday;
    cout << "Day " << today+1;

    enum suit {
      club = 0,
      diamonds = 10,
      hearts = 20,
      spades = 3
  } card;

  card = club;
  cout << "\nSize of enum variable " << sizeof(card) << " bytes."; // 4 bytes > It's because the size of an integer is 4 bytes.

  card = diamonds;
  cout << "\ndiamonds " << card;
  return 0;
}

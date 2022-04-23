// iterator ++i (pre increment) and i++(post increment)

#include <iostream>

using namespace std;
int main() {

  cout << "i++ loop \n";
  for(int i=0; i<5; i++){
    cout << i << " ";
  }

  cout << "\n\n++i loop \n";
  for(int i=0; i<5; ++i){
    cout << i << " ";
  }

  // no difference in above two both will do the job
  // both print 0 1 2 3 4

  cout << "\n\ni++ value \n";
  for(int i=0; i<5;){
    cout << i++ << " ";
  }

  cout << "\n\n++i value \n";
  for(int i=0; i<5;){
    cout << ++i << " ";
  }
  
  // Here you see the difference
  // first one prints 0 1 2 3 4
  // second one prints 1 2 3 4 5


  // Because
  // ++i increments the value, then returns it
  // i++ returns the value, and then increments it

  //++i > increment > assign
  //i++ > assign > increment

  /*

  ++i can be slightly faster than i++ because i++ requires a 
local copy(extra copy which will be thrown away) of the value of i before it gets 
incremented while ++i never does.


Modern compilers optimize it automatically and both the loops
will be efficient
... but it's not always possible, and not all compiler do this.
As a c++ programmer you should prefer ++i for the loops.
But it doesn't really what you use in other programming.

In terms of time complexity, those two tricks are equivalent
(even if a copy is actually performed). The number of 
instructions being performed inside the loop should dominate
the number of operations in the increment operation 
significantly. Therefore, in any loop of significant size,
the penalty of the incement will be massively overshadowed by the
execution of the loop body.

You are much better off worrying about optimizing the code(some serious issue)
in the loop rather than the increment ;)

Most of us use i++ because it is what we started with when
we learned programming.
  */
    
}

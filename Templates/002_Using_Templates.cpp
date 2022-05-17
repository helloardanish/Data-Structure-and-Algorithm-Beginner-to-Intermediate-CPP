#include <iostream>
#include <vector>

using namespace std; 

template<typename T> // we can create T data type and it can be any type

class Pair{
  T x;
  T y;
  public:
    void setX(T x){
      this->x = x;
    }
    T getX(){
      return x;
    }

    void setY(T y){
      this->y = y;
    }
    T getY(){
      return y;
    }
};
    

int main(){
  //Definition Pair
  //Pair p;// Error
  Pair<int> p1;
  Pair<double> p2;
  Pair<char> p3;
  // No need to create multiple classes, just pass the data type. Yaaay!
  // Easy, isn't it ;)
}





// let's initialize the value and check



#include <iostream>
#include <vector>

using namespace std; 

template<typename T> // we can create T data type and it can be any type

class Pair{
  T x;
  T y;
  public:
    void setX(T x){
      this->x = x;
    }
    T getX(){
      return x;
    }

    void setY(T y){
      this->y = y;
    }
    T getY(){
      return y;
    }
};
    

int main(){
  //Definition Pair
  //Pair p;// Error
  Pair<int> p1;

  p1.setX(5);
  p1.setY(6);
  cout << "p1 X and Y are " << p1.getX() << " " << p1.getY() << endl;
  
  Pair<double> p2;

  p2.setX(2.4);
  p2.setY(5.764);
  cout << "p2 X and Y are " << p2.getX() << " " << p2.getY() << endl;

  Pair<char> p3;

  p3.setX('A');
  p3.setY('R');
  cout << "p2 X and Y are " << p3.getX() << " " << p3.getY() << endl;
  // Easy, isn't it ;)
}


/* Output

p1 X and Y are 5 6
p2 X and Y are 2.4 5.764
p2 X and Y are A R

*/

// Now we want properties to  be different data types instead of one
// I want x as int, and y as char or double
// Let's see how we can do that using template



#include <iostream>
#include <vector>

using namespace std; 

template<typename T, typename V>

class Pair{
  T x;
  V y;
  public:
    void setX(T x){
      this->x = x;
    }
    T getX(){
      return x;
    }

    void setY(V y){
      this->y = y;
    }
    V getY(){
      return y;
    }
};
    

int main(){
  //Definition Pair
  //Pair p;// Error
  Pair<int, double> p1;

  p1.setX(5);
  p1.setY(6.46567);
  cout << "p1 X and Y are " << p1.getX() << " " << p1.getY() << endl;
  
  Pair<double, int> p2;

  p2.setX(2.412451);
  p2.setY(5);
  cout << "p2 X and Y are " << p2.getX() << " " << p2.getY() << endl;

  Pair<char, int> p3;

  p3.setX('A');
  p3.setY(1);
  cout << "p2 X and Y are " << p3.getX() << " " << p3.getY() << endl;
  // Easy, isn't it ;)
}


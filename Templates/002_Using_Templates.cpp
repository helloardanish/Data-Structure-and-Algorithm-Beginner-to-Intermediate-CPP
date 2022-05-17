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
  // Easy, isn't it ;)
}


// Multiple data types in single Pair

// Pair should behave as a triplet


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
  Pair<Pair<int, int>, int> p;

  p.setY(1);
  Pair<int, int> p2;
  p2.setX(2);
  p2.setY(3);

  p.setX(p2);

  cout << p.getX().getX() << " " << p.getX().getY() << " " << p.getY() << endl;
}

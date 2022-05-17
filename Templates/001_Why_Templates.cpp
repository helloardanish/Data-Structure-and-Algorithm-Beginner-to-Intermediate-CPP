// A class with integer type value

#include <iostream>
#include <vector>

using namespace std; 

class Pair{
  int x;
  int y;
  public:
    void setX(int x){
      this->x = x;
    }
    int getX(){
      return x;
    }

    void setY(int y){
      this->y = y;
    }
    int getY(){
      return y;
    }
};
    

int main(){
  //Definition Pair
  Pair p;
}




// What if we want the same class with double type



#include <iostream>
#include <vector>

using namespace std; 

class Pair{
  double x;
  double y;
  public:
    void setX(double x){
      this->x = x;
    }
    double getX(){
      return x;
    }

    void setY(double y){
      this->y = y;
    }
    double getY(){
      return y;
    }
};
    

int main(){
  //Definition Pair
  Pair p;
}




// What if we want this class with char type value


#include <iostream>
#include <vector>

using namespace std; 

class Pair{
  char x;
  char y;
  public:
    void setX(char x){
      this->x = x;
    }
    char getX(){
      return x;
    }

    void setY(char y){
      this->y = y;
    }
    char getY(){
      return y;
    }
};
    

int main(){
  //Definition Pair
  Pair p;
}





// Templates helps us to avoid this, we can simply create a class with T data type and give the data type during the creation of object
// Check 002 file :)

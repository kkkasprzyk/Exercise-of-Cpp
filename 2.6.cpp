#include <iostream>
using namespace std;

class Circle{
private:
float area_;
  float radius_;

public:
float getRadius(void){
    return radius_;
}
void setRadius(float radius) {
    radius_=radius;
    
}

  Circle(float radius , float area) : 
      radius_(radius),
      area_(area) {
     
  } 

    
};


int main() {
    Circle cir(0,0);
     cir.setRadius(545);
    cout << "radius_= "<<cir.getRadius();
   
    //Circle kolo(5,6);
    
    
}



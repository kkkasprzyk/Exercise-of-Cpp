#include <iostream>
using namespace std;

class Circle{
private:
  float radius_;
  float area_;
  float circumference_;
public:
Circle(float radius , float area) : 
radius_(radius),
area_(area) {
    cout<< radius_ << endl;
    cout<< area_;
}
};


int main() {
    Circle kolo(5,6);
    
}


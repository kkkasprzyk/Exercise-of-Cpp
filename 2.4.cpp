#include <iostream>
#include <math.h>
using namespace std;
class Circle {
public:
  float radius_=9;
  int circumference();
  int area();
};

  int Circle::circumference() {
     return 2*M_PI*radius_;
  }
int Circle::area() {
    return M_PI*radius_*radius_;
}

 int main()
{
Circle cir;
cout << cir.area();
cout << cir.circumference();
}

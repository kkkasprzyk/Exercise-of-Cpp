#include <iostream>
using namespace std;
class Circle {
public:
  float radius_;
  Circle(float radius) {
   radius_=radius;
   cout << "radius_ =" << radius_ << endl;
  }
  ~Circle(void){
     cout <<"Usunięte";
  }
};

int main()
{

Circle nic(1);
 
}

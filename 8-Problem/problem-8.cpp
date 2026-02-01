#include <iostream>
using namespace std;

int main(){
   double area;
   int radius;
   double pi;

   pi = 3.1416;

   cout << "Give me radius: ";
   cin >> radius;

   area = pi*(radius*radius);

   cout << "Area is:" << area;


return 0;
}

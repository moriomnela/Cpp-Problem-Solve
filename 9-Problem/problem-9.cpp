/*Calculate simple interest*/
#include <iostream>
using namespace std;

int main(){
   double length;
   double width;
   double perimeter;



   cout << "Enter Length: ";
   cin >> length;
   cout << "Enter Width: ";
   cin >> width;


   perimeter = 2*(length+width);

   cout << "Perimeter is: " << perimeter << endl;


return 0;
}

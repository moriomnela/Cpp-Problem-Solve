/*Check leap year*/

#include <iostream>
using namespace std;

int main(){
   int year;


   cout << "Enter year: ";
   cin >> year;


   if(year % 4 == 0 && year % 100 != 0|| (year % 400 == 0)){
        cout << "It's Leapyear" << endl;
   }else {
        cout << "It's Not Leapyear" << endl;
   }

return 0;
}

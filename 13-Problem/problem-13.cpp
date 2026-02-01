/*Find largest of two numbers*/

#include <iostream>
using namespace std;

int main(){
   int number1;
   int number2;

   cout << "Enter Number 1: ";
   cin >> number1;
   cout << "Enter Number 2: ";
   cin >> number2;

   if(number1 > number2){
        cout << " Number 1 is Largest Number" << endl;
   }else if (number1 < number2) {
        cout << "Number 2 is Largest Number" << endl;
   }else {
        cout << "Equal Number" << endl;
   }

return 0;
}

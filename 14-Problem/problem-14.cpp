/*Find largest of three numbers*/

#include <iostream>
using namespace std;

int main(){
   int number1;
   int number2;
   int number3;

   cout << "Enter Number 1: ";
   cin >> number1;
   cout << "Enter Number 2: ";
   cin >> number2;
   cout << "Enter Number 3: ";
   cin >> number3;

   if(number1 >= number2 && number1 >= number3){
        cout << "Number 1 is Largest Number" << endl;
   }else if (number1 <= number2 && number3 <= number2 ) {
        cout << "Number 2 is Largest Number" << endl;
   }else {
        cout << "Number 3 is Largest Number" << endl;
   }

return 0;
}

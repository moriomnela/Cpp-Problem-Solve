/*Check even or odd*/

#include <iostream>
using namespace std;

int main(){
   int number;

   cout << "Enter Number: ";
   cin >> number;

   if(number > 0){
        cout << "Number is Positive";
   }else if (number < 0) {
        cout << "Number is Negative";
   }else {
        cout << "Number is Zero";
   }

return 0;
}

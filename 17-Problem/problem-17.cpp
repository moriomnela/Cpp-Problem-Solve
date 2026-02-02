/*Check alphabet, digit, or special character*/

#include <iostream>
using namespace std;

int main(){
   char input;


   cout << "Enter Input: ";
   cin >> input;


   if ((input >='a' && input <= 'z') || (input >='A' && input <='Z')){
      cout << "It's Alphabet" << endl;
   }
    else if( input >= '0' && input <= '9') {
        cout << "It's digit" << endl;
   }else {
        cout << "It's Special Character" <<endl;
    }

return 0;
}

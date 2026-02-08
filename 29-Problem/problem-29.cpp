/*Check palindrome number*/
#include <iostream>
using namespace std;

int main(){

   int number;
   int remainder;
   int reverse = 0;

   cout << "Enter number: ";
   cin >> number;


   int orginal = number;

   while(number !=0 ){
       remainder = number % 10;
       reverse = reverse * 10 + remainder;
       number = number/10;
     }
      if(reverse == orginal){
         cout <<"It's palindrome number " <<endl;
       }else{
        cout << "It's not palindrome number" << endl;
       }

  return 0;
}


/*Reverse a number*/
#include <iostream>
using namespace std;

int main(){

   int number;
   int remainder;
   int reverse = 0;

   cout << "Enter number: ";
   cin >> number;



   while(number !=0 ){
       remainder = number % 10;
       reverse = reverse * 10 + remainder;
       number --;
     }
     cout <<"Reverse number is: " << reverse <<endl;
  return 0;
}


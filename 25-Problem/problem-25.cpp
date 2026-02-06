/*Print multiplication table*/

#include <iostream>
using namespace std;

int main(){

   int number;

   cout << "Enter number: ";
   cin >> number;

    int n = 1;
    int multiplication = 0;
   while(n <= 10){
       multiplication = number * n;
       cout << number << " * " << n << " = " << multiplication <<endl;
       n++;
     }
  return 0;
}

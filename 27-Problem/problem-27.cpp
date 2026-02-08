/*Count digits of a number*/

#include <iostream>
using namespace std;

int main(){

   int number;

   cout << "Enter number: ";
   cin >> number;

  int n = 1;

  while(number/10 != 0 ){
    number = number/=10;
    n++;
  }
  cout << "Digit is:" << n << endl;
  return 0;



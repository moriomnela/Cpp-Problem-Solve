/*Find factorial of a number*/

#include <iostream>
using namespace std;

int main(){

   int number;

   cout << "Enter number: ";
   cin >> number;

  int n = 1;
  int factorial = 1;

  while(n <= number){
    factorial = factorial*n;
    n++;
  }
  cout << "Factorial is:" << factorial << endl;
  return 0;
}








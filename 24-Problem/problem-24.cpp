/*Find sum of first N natural numbers*/

#include <iostream>
using namespace std;

int main(){

   int number;

   cout << "Enter number: ";
   cin >> number;

    int n = 0;
    int sum = 0;
   while(n <= number){
       sum = sum + n;
       n++;
     }
      cout <<"Sum is: " << sum <<endl;
  return 0;
}


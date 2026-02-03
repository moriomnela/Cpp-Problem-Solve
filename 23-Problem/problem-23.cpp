/*Print odd numbers from 1 to N*/

#include <iostream>
using namespace std;

int main(){

   int number;
   cout << "Enter number: ";
   cin >> number;

   int n=0;
   while(n <= number){
    if(n % 2 == 1){
        cout << n <<endl;
    }
    n++;
   }


return 0;
}


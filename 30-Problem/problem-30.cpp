/*Print Fibonacci series (N terms)*/

#include <iostream>
using namespace std;

int main(){

   int number;


   cout << "Enter number: ";
   cin >> number;

      int n = 0;
      int first = 0;
      int second = 1;

    cout << first << endl;
    cout << second << endl;


  while(n < number ){
      int Fibonacci = first + second;
      first = second;
      second = Fibonacci;
      n++;
     cout <<  Fibonacci << endl;
  }

  return 0;
}


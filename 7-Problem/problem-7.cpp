#include <iostream>
using namespace std;

int main(){
   int days;
   int years;
   int weeks;


   cout << "Enter days:" ;
   cin >> days;

   years = days/365;
   weeks = days/7;
   days = (years+weeks)-days;


   cout << "Years " << years <<endl;
   cout << "Week: " << weeks <<endl;
   cout << "Days: " << days;

return 0;
}

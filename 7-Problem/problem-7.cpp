/*Convert days into years, weeks, days*/
#include <iostream>
using namespace std;

int main(){
   int days;
   int years;
   int weeks;
   int tolaldays;


   cout << "Enter days:" ;
   cin >> tolaldays;

   int remainder_days = tolaldays % 365;

   years = tolaldays / 365;
   weeks = remainder_days  / 7;
   days = remainder_days % 7;


   cout << "Years " << years <<endl;
   cout << "Week: " << weeks <<endl;
   cout << "Days: " << days;

return 0;
}

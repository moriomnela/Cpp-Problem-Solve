/*Calculate simple interest*/
#include <iostream>
using namespace std;

int main(){
   double Interest;
   int  Principal;
   double Rate;
   double Time;


   cout << "Principal is : ";
   cin >> Principal;

   cout << "Rate is : ";
   cin >> Rate;

   cout << "Time is : ";
   cin >> Time;

   Interest = (Principal*Rate*Time)/100;

   cout << "Interest is:" << Interest << endl;


return 0;
}

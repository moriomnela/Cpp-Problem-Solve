/*Check pass or fail using marks*/

#include <iostream>
using namespace std;

int main(){
   int marks;


   cout << "Enter your marks: ";
   cin >> marks;

   if (marks <= 100 && marks >= 33){
      cout << "You are pass" << endl;
   }
    else {
        cout << "You are fail"<<endl;
    }

return 0;
}

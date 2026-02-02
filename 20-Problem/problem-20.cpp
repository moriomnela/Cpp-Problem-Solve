/*Grade system using marks*/

#include <iostream>
using namespace std;

int main(){
   int marks;


   cout << "Enter your marks: ";
   cin >> marks;

   if (marks > 100 || marks < 0){
      cout << "invalid marks" << endl;
   }
   else if (marks >= 80 && marks <=100){
      cout << "You got A+" << endl;
   }
    else if(marks >= 70 && marks <=79) {
        cout << "You got A" <<endl;
    }
    else if(marks >= 60 && marks <=69) {
        cout << "You got A-" <<endl;
    }
    else if(marks >= 50 && marks <=59) {
        cout << "You got B" <<endl;
    }
    else if(marks >= 40 && marks <=49) {
        cout << "You got C" <<endl;
    }
    else if(marks >= 33 && marks <=39) {
        cout << "You got D" <<endl;
    }else {
        cout << "You are fail"<<endl;
    }

return 0;
}

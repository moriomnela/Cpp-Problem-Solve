/*Print all prime numbers between two numbers*/

#include <iostream>
using namespace std;
int main(){

    int startnumber;
    cout << "Enter 1st number:" ;
    cin >> startnumber;

    int endnumber;
    cout << "Enter 2nd number:" ;
    cin >> endnumber;

    for(int num = startnumber;num <= endnumber; num++){
          if(num < 2){
            continue;
            }

      bool isprime = true;
         for(int i=2; i*i <= num; ++i){
            if(num%i==0){
                isprime = false;
                break;
            }
       }
    if(isprime)
        cout << "Prime Number is: " << num << endl;
    }

return 0;
}


/*Check prime number*/
#include <iostream>
using namespace std;
int main(){

    int startnumber;
    cout << "Enter number:" ;
    cin >> startnumber;

    int endnumber;
    cout << "Enter number:" ;
    cin >> endnumber;

    int num;

    bool isprime = true;
    for(int num = startnumber;num <= endnumber; num++){
         for(int i=2; i*i <= num; i++){
        if(num%i==0){
            isprime=false;
            break;
        }
      }
       cout << "Prime Number is: " << num << endl;
    }

return 0;
}


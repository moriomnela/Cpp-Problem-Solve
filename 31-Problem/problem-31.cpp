/*Check prime number*/
#include <iostream>
using namespace std;
int main(){

    int number;
    cout << "Enter number:" ;
    cin >> number;


    if(number <=1 ){
        cout << "It is not Prime Number";
    }

    bool isprime = true;
    for(int i=2; i*i <= number; i++){
        if(number%i==0){
            isprime=false;
            break;
        }
    }
    if(isprime){
        cout << "It is Prime Number" << endl;
    }else {
        cout << "It is Not Prime Number" << endl;
    }

return 0;
}


/*Check prime number*/

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter number: ";
    cin >> number;

    if(number <= 1){
        cout << "It is not a prime number" << endl;
        return 0;
    }

    bool isPrime = true;
    for(int i = 2; i*i <= number; i++){
        if(number % i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime)
        cout << "It is a prime number" << endl;
    else
        cout << "It is not a prime number" << endl;

    return 0;
}



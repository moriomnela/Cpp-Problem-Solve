#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    int temp;

    cout << "Enter Nummber 1:";
    cin >> num1;
    cout << "Enter Number 2:";
    cin >> num2;

    temp=num1;
    num1=num2;
    num2=temp;



    cout << "Swap Number :\n" ;
    cout << "Number 1:" << num1 << endl;
    cout << "Number 2:" << num2 << endl;





return 0;
}

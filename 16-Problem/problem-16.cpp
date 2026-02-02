/*Check vowel or consonant*/

#include <iostream>
using namespace std;

int main(){
   char Alphabet;


   cout << "Enter Alphabet: ";
   cin >> Alphabet;


   if ( Alphabet == 'a'|| Alphabet == 'e' || Alphabet == 'i'|| Alphabet == 'o'|| Alphabet == 'u' || Alphabet == 'A'|| Alphabet =='E' || Alphabet == 'I'|| Alphabet == 'O' || Alphabet == 'U'){
      cout << "It's Vowel" << endl;
   }else {
        cout << "It's Consonant" << endl;
   }

return 0;
}

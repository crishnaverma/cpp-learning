#include <iostream>
using namespace std;

int main(){
    char letter;
    cout << "Enter the letter \n";
    cin >> letter;

    if (letter >='a' && letter <= 'z'){
        cout<< "letter is in smallcase";
    }
    else{
        cout<< "letter is in uppercase";
    }



}
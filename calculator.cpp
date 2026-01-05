#include <iostream>
#include <string>
using namespace std;

int main (){
    int a;
    int b;
    string d;
    cout << "Enter The First Number \n";
    cin >> a;
    cout << "Enter The Second Number \n";
    cin >> b;
    cout << "What would you like to do \n";
    cin >> d;
    
    int sum = a+b;
    float protuct = a*b;
    float divide = a/b;
    float subtract = a-b;
    
    if( d == "sum"){
        cout <<"Sumber of the number is: "<< sum << endl;
    }

    else if (d=="substract")
    {
        cout <<"Difference of the number is: "<< subtract << endl;
    }

    else if (d=="product")
    {
        cout <<"Product of the number is: "<< protuct << endl;
    }

    else if ( d== "divide")
    {
        cout <<"Divide of the number is: "<< divide << endl;
    }

    else cout << "invalid input" <<endl;
    
    return 0;
}
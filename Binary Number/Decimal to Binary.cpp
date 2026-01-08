#include <iostream>
using namespace std;

int Decimal_to_Binary(int n){
    int sum = 0 , pow = 1 ;
    while(n>0){
        int rem = n%2;
        n/=2;
        sum+=(rem*pow);
        pow*=10;

    }
    return sum;
}

int main(){
    cout<<Decimal_to_Binary(15);
    return 0;
}

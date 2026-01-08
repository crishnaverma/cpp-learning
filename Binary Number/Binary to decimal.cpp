#include <iostream>
using namespace std;

int Binary_to_Decimal(int n){
    int sum = 0 , pow = 1 ;
    while(n>0){
        int rem = n%10;
        n/=10;
        sum+=(rem*pow);
        pow*=2;

    }
    return sum;
}

int main(){
    cout<<Binary_to_Decimal(10110);
    return 0;
}

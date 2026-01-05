#include <iostream>
using namespace std;

int main(){
    int n = 20;

    for (int i = 1; i <= (n-1); i++){
        if(n%i == 0){
            cout<< n << " is not a prime number\n";
            break;
        }
    }
}
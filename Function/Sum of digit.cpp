#include <iostream>
using namespace std;

int sumofdigit(int n){
    int sum=0;
    while(n>0){
        int lastdigit = n%10;
        n= n/10;
        sum+=lastdigit;
    }
    cout<<sum<<endl;
    return 0;

}

int main(){
    sumofdigit(12345);
}
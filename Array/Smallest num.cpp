#include <iostream>
using namespace std;

int main(){
    int num [5] = {1,2,3,4,5};
    int size = 5;
    int small = INT8_MAX;

    for (int i = 0; i<size; i++){
        if (num[i]<small)
        small = num[i];
    }
    cout<<"Smallest number "<<small<<endl;
    return 0;
}
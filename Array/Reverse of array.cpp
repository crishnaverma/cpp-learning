#include <iostream>
using namespace std;



void reverse(int arry[], int sz){
    int start=0 , end = sz-1; 
    swap(arry[start],arry[end]);
    start++;
    end++;
}

int main(){
    int arry[] = {1,2,3,4,5};
    int sz = 5;
    reverse(arry,sz);

    for(int i = 0; i<sz;i++){
        cout<<arry[i]<<" ";

    }
    cout<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int i = 5;
    int *iptr;
    iptr = &i;

    cout<<"\ni = "<<i;
    cout<<"\n&i"<<&i;
    cout<<"\niptr"<<iptr;
    cout<<"\n*ptr"<<*iptr;
    cout<<"\n&iptr"<<&iptr;
    return 0;
    
}
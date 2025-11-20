#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value of a :";
    cin>>a;
    int &x = a;
    cout<<"\n a = " <<a;
    cout<<"\n x = "<<x ;
    cout<<"\n &a = "<<&a;
    cout<<"\n &x = "<<&x;
    return 0;
}
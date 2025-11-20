#include<iostream>
using namespace std;
 int main(){
    int num1,num2,max;
    cout<<"Enter the value of num1";
    cin>>num1;
    cout<<"Enter the value of num2";
    cin>>num2;
    if(num1>num2){
        max = num1;
    }
    else{
        max = num2;
    }
    cout<<"Here is the max value = "<<max;
 }
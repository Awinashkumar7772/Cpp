#include<iostream>
using namespace std;
void factorial(int num){
    int fact = 1;
    for(int i=1;i<=num;i++){
        fact = fact*i;   
    }
    cout<<fact;  
}

int main (){
    int num,fact;
    cout<<"Enter your number for the factorial = ";
    cin>>num;
    factorial(num);
}
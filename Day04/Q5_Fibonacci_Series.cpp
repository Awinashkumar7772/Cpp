#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{  
    return  fibonacci(n-1)+fibonacci(n-2); //
    }
}
int main(){
int number;
cout<<"Enter your number"<<endl;
cin>>number;
int fib = fibonacci(number);
for(int i=1;i<=number;i++){
cout<<fibonacci(i);
}
}
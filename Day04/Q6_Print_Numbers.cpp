#include<iostream>
using namespace std;
 void printNumber(int n){
    if(n==0) return  ;
    
        printNumber(n-1);
        cout<<n;  
}


int main(){
int n;
cout<<"Enter the number"<<endl;
cin>>n;
printNumber(n);

}
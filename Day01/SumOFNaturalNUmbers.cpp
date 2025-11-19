#include<iostream>
using namespace std;
int main(){
    int n;
    int sum =0;
    cout<<"Enter your number to print sum";
    cin>>n;
    int i=0;
    while(n>=0){
       sum = sum+i;
       i++;
       n--;
    }
     cout<<sum;
    
}

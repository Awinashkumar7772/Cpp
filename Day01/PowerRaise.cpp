#include<iostream>
using namespace std;
int main (){
    int n,m;
    int ans =1;
    cout<<"Enter the value of n and m";
    cin>>n>>m;
    for(int i=1;i<=m;i++){
       ans = ans*n;
    }
    cout<<ans;
    
}
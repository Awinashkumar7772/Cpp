#include<iostream>
using namespace std;
void simpleInterest(int p,int r,int t){
    int si = (p*r*t)/100;
    cout<<"Here is the Simple Interest = "<<si;
}
int main (){
    int p,r,t;
cout<<"Enter the Principal amount = ";
cin>>p;
cout<<"Enter the Rate of interest = ";
cin>>r;
cout<<"Enter the Time = ";
cin>>t;
simpleInterest(p,r,t);
}
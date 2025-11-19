#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int even = 0; int odd =0;
    

    while(n>0){
       int  digit = n%10;
           if(digit%2==0){
            even++;
        }
        else{
            odd++;
        }
        n=n/10;

        
        
    }
    cout<<"Odd: "<<odd<<endl;
        cout<<"Even: "<<even<<endl;
    return 0;
   
}
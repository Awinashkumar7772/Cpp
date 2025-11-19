#include <iostream>
using namespace std;
int main(){
 int n;
 int m;
 cout<<"Enter the value of n";
 cin>>n;
 cout<<"Enter the value of m";
 cin>>m;

 int min = n > m ? m : n;
int value = 0;

 for(int i=1;i<min;i++)  {
    if(n % i ==0 && m % i ==0 ){
        value = i;
    }
 } 

 cout << value << endl;
}
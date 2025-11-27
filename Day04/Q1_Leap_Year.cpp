#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year to find leap year";
    cin>>year;
    if(year/4 && year/100!=0){
        cout<<"Leap Year";
    }
    else if(year/400){
        cout<<"Leap Year";
    }
    else{
        cout<<"Not leap year";
    }
}
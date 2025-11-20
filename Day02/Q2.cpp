#include<iostream>
using namespace std;

void Calculator(int num1 ,int num2){
    int Add,Subtraction,multiply,Division;
    int choice;
    cout<<"Chose your operations : ";
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiply"<<endl;
    cout<<"4.Division"<<endl;
    cin>>choice;
   switch (choice)
   {
   case 1:
    cout<<"Here is your Addition = "<<num1+num2;
    break;
     case 2:
    cout<<"Here is your Subtraction = "<<num1-num2;
    break;
     case 3:
    cout<<"Here is your Multiplication = "<<num1*num2;
    break;
     case 4:
     if(num2==0){
        cout<<"invalid input";
     }
    else{
        cout<<"Here is your Division = "<<num1/num2;
    }
    break;
   
   default:
   cout<<"Wrong Input";
    break;
   }
}
int main(){
int num1,num2;
cout<<"Enter your num 1 = ";
cin>>num1;
cout<<"Enter your num 2 = ";
cin>>num2;
Calculator(num1,num2);
return 0;
}
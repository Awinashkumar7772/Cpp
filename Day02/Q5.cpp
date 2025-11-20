#include<iostream>
using namespace std;
void grade(int marks1,int marks2,int marks3){
int add = marks1+marks2+marks3;
if(add>=250){
    cout<<"A";
}
else if(add>=200&&add<250)
{cout<<"B";}
else if (add>=150&&add<200) { cout<<"C";}

else{
    cout<<"Fail";
}
}

void average(int grade){

}
int main(){
int marks1,marks2,marks3;
cout<<"Enter the subject-1 marks of student";
cin>>marks1;
cout<<"Enter the subject-2 marks of student";
cin>>marks2;
cout<<"Enter the subject-3 marks of student";
cin>>marks3;

grade(marks1,marks2,marks3);
}
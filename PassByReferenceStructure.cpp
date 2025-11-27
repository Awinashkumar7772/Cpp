#include<iostream>
using namespace std;
struct student{
    int prn;
    char name [100];
    char email[100];
};

void getStudentByReference(struct student &rs1){
    cout<<"Enter the prn number";
    cin>>rs1.prn;
    cout<<"Enter the name of student"<<endl;
    cin>>rs1.name;
    cout<<"Enter the email of student"<<endl;
    cin>>rs1.email;

    cout<<"Here is the details of student"<<endl<<rs1.prn<<endl<<rs1.name<<endl<<rs1.email<<endl;
}
int main(){
student r;
getStudentByReference(r);
return 0;
}
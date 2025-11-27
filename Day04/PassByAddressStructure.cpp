#include<iostream>
using namespace std;
struct student{
    int prn;char name[100];char email[100];
    int *p = &prn;
    char *n = &name[100];
    char *e = &email[100];
    
};
void getStudentByAddress(struct student *ps1){
cout<<"Enter the value of prn";
cin>>ps1->prn;

cout<<"Enter the value of name"<<endl;
cin>>ps1->name;

cout<<"Enter the value of email"<<endl;
cin>>ps1->email;

cout<<"Here is the details of student"<<ps1->prn<<endl<<ps1->name<<endl<<ps1->email;
}
int main(){
student a  ;
getStudentByAddress(&a);
return 0;
}
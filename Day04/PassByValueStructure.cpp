#include<iostream>
using namespace std;
struct student
{
    int prn;
    char name[100];
    char email[100];
};
void getstudent(struct student s1){
    cout<<"Enter your prn"<<endl;
    cin>>s1.prn;
    cout<<"Enter your name"<<endl;
    cin>>s1.name;
    cout<<"Enter your email"<<endl;
    cin>>s1.email;

    cout<<"Here is the details of the student"<<endl<<s1.prn<<endl<<s1.name<<endl<<s1.email;
}

int main(){

  student s;
  getstudent(s);
  return 0;

}
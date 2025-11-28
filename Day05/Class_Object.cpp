#include<iostream>
using namespace std;

class student{
    public:
    int roll;
    string name;

    void display(){
        cout<<"Roll :"<<roll<<endl;
        cout<<"Name: "<<name<<endl;
    }
     void inputDetails(){
        cout<<"enter roll";
        cin>>roll;
        cout<<"enter the name";
        cin>>name;
     }

};

int main (){
    student s1;
    s1.roll;
    s1.name;
    s1.inputDetails();
    s1.display();

}

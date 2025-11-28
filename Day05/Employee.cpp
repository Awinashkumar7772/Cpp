#include<iostream>
using namespace std;

struct Employees{
    int Employee_id;
    char emp_name[100];
    char employee_designation[50];
    char department[50];
    long salary;
};

void getInformation(struct Employees &se){
cout<<"Employe_id : ";
cin>>(se.Employee_id);

cout<<" Employee name : "  ;
cin.getline(se.emp_name,100);

cout<<"Employee designation : ";
cin.getline(se.employee_designation,50);

cout<<"Employee department : ";
cin.getline(se.department,50);

cout<<"Employee salary : ";
cin>>se.salary;

}

void displayInformation(struct Employees se){
cout<<se.Employee_id<<endl<<se.emp_name<<endl<<se.employee_designation<<endl<<se.department<<endl<<se.salary;
}

int main(){
    int count = 0;   
    int n;
    cout<<"How many employees do you want to enter? ";
    cin>>n;

    Employees e[n];

    for(int i = 0; i < n; i++){
        cout<<"\nEntering details for Employee "<<i+1<<endl;
        getInformation(e[i]);
        count++;   
    }

    cout<<"\nTotal Employees Entered = "<<count<<endl;

    for(int i = 0; i < n; i++){
        displayInformation(e[i]);
    }

    return 0;
}
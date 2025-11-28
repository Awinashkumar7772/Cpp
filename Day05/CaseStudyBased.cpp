//design a system to manage smart appliance in tech store 
//base class appliance  data members applianceid,id,price,connectivitytype,warranty years
//use an array of smartAppliance objects(min 3)
//functions to input ,display appliance details ,display appliance with warranty more than 2 years

#include<iostream>
using namespace std;
class appliance{
    private:
    int appliance_id;
    string brand;
    double price;
    string connectivityType;
    int warrantyYears;

    public:

    appliance( int appliance_id,string brand, double price,string connectivityType,int warrantyYears){
        appliance_id = 0;
        brand = "";
        price = 0;
        connectivityType = "";
        warrantyYears = 0;

    }
  void getInput(){
    cout<<"Appliance Id : "<<endl;
    cin>>appliance_id;

    cout<<"Appliance brand"<<endl;
    cin>>brand;

    cout<<"Appliance Price"<<endl;
    cin>>price;

    cout<<"Appliance ConnectivityType"<<endl;
    cin>>connectivityType;

    cout<<"Appliance Warranty Years"<<endl;
    cin>>warrantyYears;
  }

  void display(){
    cout<<"Appliance Id : "<<appliance_id<<endl;
    cout<<"Brand : "<<brand<<endl;
    cout<<"Price : "<<price<<endl;
    cout<<"ConnectivityType : "<<connectivityType<<endl;
    cout<<"Warranty Years : "<<warrantyYears<<endl;
  }
  void displayWithWarranty(){
    if(warrantyYears>2){
        display();
    }
  }
  appliance (){
    
}; //default construtor

};


int main () {
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    appliance arr[n];

    cout<<"Enter the details of  appliances"<<endl; 
    for(int i=0;i<n;i++){
        cout<<"Appliance"<<i+1<<endl;
        arr[i].getInput();
    }
    for(int i=0;i<n;i++){
        cout<<"Here is the list of appliance :"<<endl;
        arr[i].display();
    }

cout<<"Appliance with more than 2 years warranty"<<endl;
    for(int i=0;i<n;i++){
        arr[i].displayWithWarranty();
    }


}
//write a c program to count the number of object of the class created 


#include<iostream>
using namespace std;

class cls{
    private:
    int objId;

    public:
    cls();
    static int objcntr;
  //  int displayObjCount();
};
int cls::objcntr = 0; //static definition

cls::cls(){
    objId =1;
    cout<<"Object created"<<endl;
    objcntr++;
}
int main(){
    cls c1;
    cls c2;
    cls c3;

    cout<<"No of object created : "<<cls::objcntr;

}
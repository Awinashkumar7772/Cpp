//Collections of elements with continuous block ..
#include <iostream>
using namespace std;
int main (){
    // int arr[5];
    // int arr[5] = {10,20,30,40,50};
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
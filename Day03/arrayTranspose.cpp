#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the row value"<<endl;
    cin>>row;
    cout<<"Enter the col value"<<endl;
    cin>>col;
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j =0;j<col;j++){
        cin>>arr[i][j];
        }
    }
    int transpose[col][row];
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
          transpose[j][i] = arr[i][j];
        }
    }
    cout<<"Transpose of matrix";
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
     return 0; 


}

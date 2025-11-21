#include <iostream>
using namespace std;

int main(){
    int row1, col1, row2, col2;

    cout<<"Enter the row1 = "<<endl;
    cin>>row1;
    cout<<"Enter the col1  = "<<endl;
    cin>>col1;
    cout<<"Enter row2 = "<<endl;
    cin>>row2;
    cout<<"Enter the col2 = "<<endl;
    cin>>col2;

    if(row1 != row2 || col1 != col2) {
        cout << "Matrix addition not possible!" << endl;
        return 0;
    }

    int arr[50][50];
    int arr1[50][50];

    cout<<"Enter the element of 1st matrix = "<<endl;
    for(int i=0; i<row1; i++){
        for(int j=0; j<col1; j++){
            cin >> arr[i][j];
        }
    }

    cout<<"Enter the element of 2nd matrix = "<<endl;
    for(int i=0; i<row2; i++){
        for(int j=0; j<col2; j++){
            cin >> arr1[i][j];
        }
    }

    // Matrix Add
    for(int i=0; i<row1; i++){
        for(int j=0; j<col1; j++){
            arr[i][j] = arr[i][j] + arr1[i][j];
        }
    }

    cout<<"Resultant Matrix (Addition) = "<<endl;
    for(int i=0; i<row1; i++){
        for(int j=0; j<col1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

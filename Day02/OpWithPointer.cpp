#include<iostream>
using namespace std;
int main(){
    int i = 2;
    int *ip = &i;
    cout<<"\n ip+1 = "<<ip+1;
    cout<<"\n *ip+1 = "<<*ip+1;
    cout<<"\n *(ip+1) ="<<*(ip+1);
    cout<<"\n ++*ip = "<<++*ip;
    return 0;
} 
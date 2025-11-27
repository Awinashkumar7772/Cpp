#include<iostream>
using namespace std;
void towerOfHanoi(int n,char src,char inter,char dest){
if(n==1){
    cout<<"moving disks from :  "<<n<<":from  "<<src<<" To : "<<dest<<endl;
}
else{
    towerOfHanoi(n-1,src,dest,inter);
  cout<<"moving disks from :  "<<n<<":from  "<<src<<" To : "<<dest<<endl;
    towerOfHanoi(n-1,inter,src,dest);
}
}
int main(){

int disk;
cout<<"Enter the number of disk";
cin>>disk;
towerOfHanoi( disk, 'A','B','C');

}
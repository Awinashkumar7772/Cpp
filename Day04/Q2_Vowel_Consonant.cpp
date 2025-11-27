#include<iostream>
using namespace std;
int main(){
char ch;
cout<<"Enter the alphabet to find vowel or consonant : ";
cin>>ch;

ch = tolower(ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
    cout<<"Vowel ";
}
else {
    cout<<"Consonant ";
}

}

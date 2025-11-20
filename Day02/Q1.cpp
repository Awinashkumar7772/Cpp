// 2. Write a C++ program to swap two numbers using functions.
#include <iostream>
using namespace std;

void swap(int num1, int num2)
{
    int num3 = num1;
    num1 = num2;
    num2 = num3;
     cout << "After swaping = " << num1 << " , " << num2;
}
int main()
{
    int num1, num2;
    cout << "Enter the num1" << endl;
    cin >> num1;
    cout << "Enter the num2" << endl;
    cin >> num2;

    swap(num1, num2);

   
}

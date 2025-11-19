#include<iostream>
#include<cmath>
using namespace std;

int main (){
    long long n;
    cout << "Enter the number: ";
    cin >> n;

    long long num = n;
    long long sum = 0;

    // Count digits
    int digits = 0;
    long long temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // Armstrong calculation
    while (n > 0) {
        int i = n % 10;
        sum += pow(i, digits);
        n = n / 10;
    }

    if (sum == num) {
        cout << "True";
    } else {
        cout << "False";
    }

    return 0;
}

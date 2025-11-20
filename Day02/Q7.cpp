#include <iostream>
using namespace std;

int largestDigit(int num) {
    int largest = 0;
    while (num > 0) {
        int digit = num % 10;
        if (digit > largest) {
            largest = digit;
        }
        num = num/10;
    }

    return largest;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Largest digit: " << largestDigit(n);

    return 0;
}

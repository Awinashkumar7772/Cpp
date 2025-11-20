#include <iostream>
using namespace std;

void printBetween(int start, int end) {
   
    if(start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    for(int i = start; i <= end; i++) {
        cout << i << " ";
    }
}

int main() {
    int a, b;
    cout << "Enter value of a & b : ";
    cin >> a >> b;

    printBetween(a, b);

    return 0;
}

#include <iostream>
using namespace std;

int reverseNum(int n, int rev = 0) {
    // Base case
    if (n == 0) {
        return rev;
    }

    // Recursive case
    return reverseNum(n / 10, rev * 10 + (n % 10));
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Reversed number = " << reverseNum(num);

    return 0;
}
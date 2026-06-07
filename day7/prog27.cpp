#include <iostream>
using namespace std;

// Recursive function to calculate sum of digits
int sumOfDigits(int n) {
    // Base case
    if (n == 0) {
        return 0;
    }

    // Recursive case
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Sum of digits = " << sumOfDigits(num);

    return 0;
}
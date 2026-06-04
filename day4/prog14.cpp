#include <iostream>
using namespace std;

int main() {
    int n, first = 0, second = 1, next;

    cout << "Enter the value of n: ";
    cin >> n;

    if (n == 1) {
        cout << "The " << n << "st Fibonacci term is: " << first;
    }
    else if (n == 2) {
        cout << "The " << n << "nd Fibonacci term is: " << second;
    }
    else {
        for (int i = 3; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }

        cout << "The " << n << "th Fibonacci term is: " << second;
    }

    return 0;
}
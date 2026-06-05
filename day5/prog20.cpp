#include <iostream>
using namespace std;

int main() {
    int num, largestPrime = -1;

    cout << "Enter a number: ";
    cin >> num;

    // Divide by 2 until num becomes odd
    while (num % 2 == 0) {
        largestPrime = 2;
        num /= 2;
    }

    // Check odd factors
    for (int i = 3; i <= num; i += 2) {
        while (num % i == 0) {
            largestPrime = i;
            num /= i;
        }
    }

    cout << "Largest Prime Factor = " << largestPrime;

    return 0;
}

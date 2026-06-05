#include <iostream>
using namespace std;

int main() {
    int num, temp, remainder, sum = 0, fact;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while (temp != 0) {
        remainder = temp % 10;
        fact = 1;

        // Find factorial of digit
        for (int i = 1; i <= remainder; i++) {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    if (sum == num)
        cout << num << " is a Strong Number.";
    else
        cout << num << " is not a Strong Number.";

    return 0;
}
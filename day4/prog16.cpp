#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end, num, originalNum, remainder, digits, result;

    cout << "Enter starting range: ";
    cin >> start;

    cout << "Enter ending range: ";
    cin >> end;

    cout << "Armstrong numbers between " << start 
         << " and " << end << " are: " << endl;

    for (num = start; num <= end; num++) {
        originalNum = num;
        digits = 0;
        result = 0;

        // Count digits
        while (originalNum != 0) {
            originalNum /= 10;
            digits++;
        }

        originalNum = num;

        // Calculate Armstrong sum
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, digits);
            originalNum /= 10;
        }

        // Check Armstrong number
        if (result == num) {
            cout << num << " ";
        }
    }

    return 0;
}
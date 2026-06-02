#include <iostream>
using namespace std;

int main() {
    int num, count = 0;

    cout << "Enter a number: ";
    cin >> num;

    if (num == 0){
        count = 1;
    }
    while (num != 0) {
        num = num/10;
        count++;
    }
    cout << "the number of digits in the number is " << count << endl;
    return 0;
}
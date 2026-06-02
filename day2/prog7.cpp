#include <iostream>
using namespace std;
int main(){
    int num, product=1, digit;
    cout << "enter the number ";
    cin >> num;
    while (num!=0){
        digit=num%10;
        product=product*digit;
        num=num/10;
    }
    cout << "the product of digits is " << product << endl;
    return 0;
}
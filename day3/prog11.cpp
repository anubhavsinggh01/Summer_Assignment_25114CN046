#include <iostream>
using namespace std;
int main (){
    int num1, num2, gcd;
    cout << "enter your first number";
    cin >> num1;
    cout<<"enter your second number";
    cin >> num2;
    for (int i=1;i<=num1;i++){
        if (num1%i==0 && num2%i==0){
            gcd=i;
        }
    }
    cout << "GCD of " << num1 << " and " << num2 << " is " << gcd << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main (){
    int num1, num2, lcm, gcd;
    cout << "enter your first number";
    cin >> num1;
    cout<<"enter your second number";
    cin >> num2;{
        for (int i=1;i<=num1;i++){
            if (num1%i==0 && num2%i==0){
                gcd=i;
            }
            lcm=(num1*num2)/gcd;
        }
    }
    cout << "LCM of " << num1 << " and " << num2 << " is " << lcm << endl;
    return 0;
}
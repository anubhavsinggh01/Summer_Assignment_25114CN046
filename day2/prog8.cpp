#include <iostream>
using namespace std;
int main(){
    int num, reverse=0,original, remainder;
    cout << "enter the number:";
    cin >> num;
    original = num;
    while (num!=0){
        remainder = num%10;
        reverse=reverse*10 + remainder;
        num = num/10;
    }
    if(reverse == original){
        cout << "the number is palindrome";
    }
    else{
        cout << "the number is not palindrome";
    }

}
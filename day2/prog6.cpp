#include <iostream>
using namespace std;
int main(){
    int num, reverse=0, remainder;
    cout<< "enter the number:";
    cin >> num;
    while (num!=0){
        remainder = num%10;
        reverse = reverse*10 + remainder;
        num =num/10;
    }
    cout << "the reverse of the number is" << reverse << endl;
    return 0;
}
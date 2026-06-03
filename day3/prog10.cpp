#include <iostream>
using namespace std;
int main(){
    int start, end;;
    cout <<"enter the 1st number of th range";
    cin >> start;
    cout << "enter the last number of the range";
    cin >> end;
    for (int i= start; i<= end; i++){
        bool isprime=true;
         if(i<2){
                continue;
            }
        for (int j=2; j<i; j++){
            if (i%j==0){
                isprime=false;
                break;
            }
        }
        if (isprime){
            cout << i << endl;
        }
    }
    
  
    return 0;
}
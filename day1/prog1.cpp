#include<iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    cout<<"Enter the final number: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {sum=sum+i;}
    cout<<"The sum of natural numbers till "<<n<<" is "<<sum<<"."<<endl;
}

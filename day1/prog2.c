#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the number whose table is to be printed: ");
    scanf("%d",&n);
    for(i=1;i<11;i++)
    {printf("%d * %d = %d\n",n,i,n*i);}
    return 0;
}

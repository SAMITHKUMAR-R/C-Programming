#include<stdio.h>
int main()
{
    int n=7,i=1;
    int fact=1;
    do
    {
        fact*=i;
        i++;
    }while(i<=n);
    printf("Factorial of %d is %d \n",n,fact);
    return 0;
}

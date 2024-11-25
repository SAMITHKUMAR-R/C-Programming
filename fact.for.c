#include<stdio>
int main()
{
    int i,fact=1,number;
    printf("Enter a Number :");
    scanf("%d",&number);
    for(i=1;i<=number;i++)
    {
        fact = fact*i;
    }
    printf("Facetorial of %d is %d",number,fact);
    return 0;
}


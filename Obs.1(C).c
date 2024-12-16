#include <stdio.h>
#include <math.h>
int main()
{
    float principle,year,rate,CI,SI;
    printf("Enter the Principle amount : ");
    scanf("%f",&principle);
    printf("Enter the No. of Years : ");
    scanf("%f",&year);
    printf("Enter the Rate of interest: ");
    scanf("%f",&rate);

    SI= (principle*year*rate)/100;
    printf("Simple Interest = %f\n ",SI);
    CI= principle*(pow((1+rate/100),year));
    printf("Compound Interest = %f\n ",CI);
    return 0;
}

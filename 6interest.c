#include<stdio.h>
#include<math.h>
void main ()
{
    int p,n;
    float r,si,ci;
    printf("Enter Principal Amount : \n");
    scanf("%d",&p);
    printf("Enter Time Period :  \n");
    scanf("%d",&n);
    printf("Enter Rate Of Interest : \n");
    scanf ("%f",&r);
    si=p*n*r/100;
    printf("\nSimple Interest : %f",si);
    ci=p*(pow(1+r/n,n));
    printf("\nCompound Interest : %f",ci);
    
}







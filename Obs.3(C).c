#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp,sum=0,digit,numDigit=0;
    printf("Enter a Number : ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        temp/=10;
        numDigit++;
    }
    temp=n;
    while (temp!=0)
    {
        digit=temp%10;
        sum+= pow(digit,numDigit);
        temp/=10;
    }
    if (sum==n)
    {
        printf("%d is an Amstrong Number\n",n);
    }
    else
    {
         printf("%d is Not an Amstrong Number\n",n);
    }
    return 0;
}

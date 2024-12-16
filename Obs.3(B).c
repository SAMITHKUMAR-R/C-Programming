#include<stdio.h>
int main()
{

    int n,sum=0;
    printf("Enter a Number : ");
    scanf("%d",&n);
    for (int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=1;
        }
    }
    if(sum==n)
    {
        printf("%d is a Perfect Number\n",n);
    }
    else
    {
        printf("%d is not a Perfect Number\n",n);
    }
    return 0;
}

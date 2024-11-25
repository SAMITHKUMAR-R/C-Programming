#include<stdio.h>
int main()
{
    int marks[10],i,n,sum=0;
    double average ;
    printf("Enter Number Of Marks :\n");
    scanf("%d",&n);
    for (i=0;i<n;++i)
    {
        printf("Enter Number %d \n: ",i+2);
        scanf("%d",&marks[i]);
        sum+=marks[i];
    }
    average= (float) sum/n;
    printf("Average =%2lf\n",average);
    return 0 ;
}


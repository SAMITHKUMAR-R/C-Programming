#include<stdio.h>
int main()
{
    int n , a , i;
    
    printf("Enter The Required Table : \n");
    
    scanf("%d",&a);
    
    for(i=1;i<=15;i++)
    
    {
        if (i==5|| i==7)
           continue;
           printf("\n%d * %d = %d",a,i,a*i);
    }
    return 0;
}

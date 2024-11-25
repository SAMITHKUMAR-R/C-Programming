#include<stdio.h>
int main()
{
    int arr[100];
    int n,mm=1,ctr=0;
    int i,j;
    printf("Input the number of elements to be stored in the array:\n");
    scanf("%d",&n);
    printf("Input %d elements in the array:\n",n);
    for(i=0;i<n;i++)
    {
        printf("Element-%d:\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                ctr++;
                break;
            }
        }
    }
    printf("Total Number Of Duplicate Elements %d\n",ctr);
    return 0;
}



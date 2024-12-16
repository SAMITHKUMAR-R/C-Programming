#include<stdio.h>
int main ()
{
    int days,years,weeks,hours;
    printf ("Enter the number of days :");
    scanf("%d",&days);
    hours=(days*24);
    years=(days/365);
    weeks=(days%365)/7;
    days=days-((years*365)+(weeks*7));
    printf("No. of Hours : %d\n",hours);
    printf("No. of Years : %d\n",years);
    printf("No. of Weeks : %d\n",weeks);
    printf("No. of Days : %d\n",days);
    return 0;
}

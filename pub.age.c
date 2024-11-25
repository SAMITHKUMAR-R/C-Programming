#include <stdio.h>
int main()
{
    int age ;
    printf("Enter your age :\n ");
    scanf("%d",&age);
    if (age>=20&&age<=60)
    {
        printf("You are Invited \n");
    }else{
        printf("Sorry, You cannot enter\n");
    }
    return 0;
}

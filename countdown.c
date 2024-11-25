#include<stdio.h>
int main ()
{
    int countdown_seconds=10;
    
    while (countdown_seconds>0)
    {
        printf("T-minus %d seconds ...\n",countdown_seconds);
        countdown_seconds--;
    }
    printf("Rocket Has Launched !\n");
    return 0;
}

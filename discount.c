#include <stdio.h>
int main()
{
    int isMember=1;
    float pur_amo=120.0;
    if(isMember)
    {
        if(pur_amo>100)
            printf("Discount : 10%%\n");
        
        else
            printf("Discount : 0%%\n");
    }
    else
    {
        if(pur_amo>150)
            printf("Discount : 5%%\n");
            
        else
            printf("Discount : 0%%\n");
    }
}

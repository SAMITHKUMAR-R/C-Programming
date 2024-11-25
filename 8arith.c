#include<stdio.h>
int main()
{
    int a,b;
    char c ;
    printf("Enter Value Of A \n");
    scanf("%d",&a);
    printf("Enter Value Of B\n");
    scanf("%d",&b);
    printf("Enter Opertion\n" );
    scanf("\n%c",&c);
    
    switch(c)
    {
     case'+' :
        printf("The Sum Is %d",a+b);
        break;
    
     case'-' :
        printf("The Difference Is %d",a-b);
        break;
        
     case'/' :
        printf("The Division Is %d",a/b);
        break;
       
     case'*' :
        printf("The Multiplication Is %d",a*b);
        break;
        
     case'%' :
        printf("The Modulus Is %d",a%b);
        break;
        
    }
    return 0;
}





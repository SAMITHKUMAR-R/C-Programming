#include <stdio.h>
void main ()
{
    int a=5 ,b=10 ,c,d,e,f,g,h,i,j,k;
    
    // Logical Operator //
    c=a<b&&a==b;
    printf ("%d\n",c);
    d=a<b||a==b;
    printf ("%d\n",d);
    e=!(a<b);
    printf ("%d\n",e);
    
    // Bitwise Operator //
    f=a&b;
    printf ("%d\n",f);
    g=a|b;
    printf ("%d\n",g);
    h=a^b;
    printf("%d\n",h);
    i=a<<b;
    printf("%d\n",i);
    j=a>>b;
    printf("%d\n",j);
    k=~(a+b);
    printf("%d\n",k);
    
    
    
    
}





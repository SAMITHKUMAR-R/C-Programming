#include<stdio.h>
int main()
{
    double a=2,b=5,c=5;
    if(a+b<=c||a+c<=b||b-c<=a)
       printf("These sides don't form a valid triangle \n");
    if(a==b&&b==c)
       printf("The triangle is equilateral\n");
    if((a==b&&a!=c)||(a==c&&a!=b)||(b==c&&b!=a))
       printf("The triangle is isosceles\n");
    if(a!=b&&a!=c&&b!=c)
       printf("The triangle is scalene\n");
    return 0;
}

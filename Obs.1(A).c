#include <stdio.h>
int main ()
{
    float radius , circumference , diameter,area;
    printf("Enter the radius of the circle :");
    scanf("%f",&radius);
    diameter=2*radius;
    circumference=2*3.14*radius;
    area=3.14*radius*radius;
    printf("Circumference Of Circle :%.2f units\n",circumference);
    printf("Diameter Of Circle :%.2f units\n",diameter);
    printf("Area Of Circle :%.2f sq.units\n",area);
    return 0;
}

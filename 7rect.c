#include <stdio.h>
void main()
{
    float l,w,area,peri;
    printf("Enter Length Of Rectangle : \n");
    scanf("%f",&l);
    printf("Enter Width Of Rectangle : \n");
    scanf("%f",&w);
    area=l*w;
    peri=2*(l+w);
    printf("\nArea Of Rectangle : %f",area);
    printf("\nPerimeter Of Rectangle : %f",peri);
    
    
}


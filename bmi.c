#include<stdio.h>
int main ()
{
    float weight , height, bmi;
    printf("Enter Weight (in kg) :\n");
    scanf ("%f",&weight);
    printf("Enter Height (in m) :\n");
    scanf ("%f",&height);
    bmi=weight/(height*height);
    if (bmi<18.5)
    {
        printf("Your BMI is %2f \n You are Under Weight \n",bmi);
    }
    else if (bmi>=25&&bmi<29.9)
    {
        printf("Your BMI is %2f \n You are Over Weight \n",bmi);
    }
    else if (bmi>=18.5&&bmi<24.9)
    {
        printf("Your BMI is %2f \n You are Normal Weight \n",bmi);
    }
    else
    {
        printf("Your BMI is %2f \n You are Obese \n",bmi);
    }
}

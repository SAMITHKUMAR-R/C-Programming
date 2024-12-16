#include <stdio.h>
int main ()
{
    char op;
    float num1,num2,result=0.0f;
    printf("Welcome to simple calculator !\n");
    printf("Enter [num1][+,=,*,/][num2]\n");
    scanf("%f%c%f",&num1,&op,&num2);

    switch(op)
        {
        case'+':
            result=num1+num2;
            break;
            case'-':
            result=num1-num2;
            break;
            case'*':
            result=num1*num2;
            break;
            case'/':
                if(num1>num2)
                    result=num1/num2;
                else
                    printf("Error! Div. by <num1 is Invalid\n");
            break;
            default:
            printf("Invalid Operator");
        }
        printf("%.2f%c%.2f = %.2f",num1,op,num2,result);
        return 0;
}

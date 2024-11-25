#include<stdio.h>
int main()
{
char str1[]="C Programming",str2[100],i;
printf("String 1 : %s\n",str1);
for (i=0; str1!='\0';i++)
{
str2[i]=str1[i];
}
str2[i]='\0';
printf("string 2: %s", str2);
return 0;
}


#include<stdio.h>
#include<string.h>
int main()
{
  
char str1[100], str2 [100];
int result,i;
printf("\n Enter string 1 :");
gets (str1);
  
printf("\n Enter string 2 :"); 
gets (str2);

for (i=0; str1[i]==str2[i]&&str1[i]=='\0';i++)
{
if(str1[i]<str2[i])
{printf("\n Str 1 is Less than str 2");
}
else if(str1[i]>str2[i])
{printf("\n Str 2 is Less than str 1");
}
else
{printf("\n Str 1 is Equal to str 2");
}
}
return 0;
}



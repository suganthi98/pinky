#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the value a \n");
scanf("%d",&b);
printf("enter the value b \n");
scanf("%d",&b);
printf("enter the value c \n");
scanf("%d",&c);
if(a>b&&a>c)
printf("the a value is high %d\n",a);
else
if(b>a&&b>c)
printf("b value is high %d\n",b);
else
printf("the c value is high %d\n",c);
}

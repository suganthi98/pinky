#include<stdio.h>
int main()
{
char c;
printf("the character is %c\n",c);
scanf("%c",&c);
if((c>='a' && c<='z')||(c>='A' && c<='Z'))
printf("the character is alphabet%c\n",c);
else
printf("the character is not alphabet%c\n",c);
return 0;
}


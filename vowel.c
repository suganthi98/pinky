#include<stdio.h>
int main()
{
char c;
int lowervowel,uppervowel;
printf("enter the  character %c",c);
scanf("%c",&c);
lowervowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
uppervowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if(lowervowel||uppervowel)
printf("%c the character is vowel \n",c);
else
printf("%c the character is consonant \n",c);
return 0;
}


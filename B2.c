#include<stdio.h>
int main()
{
char s[100];
printf("enter your string ");
scanf("%s",&s);
int i,c=0;
for( i=0;s[i]!='\0';i++)
{
c++;
}
printf(" the length is =%d\n",c);
}

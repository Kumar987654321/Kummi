#include<stdio.h>
int main()
{
    int c=0;
    char s[100];
    printf("enter the numbers :");
    fgets(s,6,stdin);
    while(s[c]!='\0')
    {
       printf("%c ",s[c]);
       c++;
    }

}

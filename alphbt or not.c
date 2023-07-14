#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if((c>='A')&&(c<='Z')||(c>='a')&&(c<='z'))
    {
        printf(" the given character is alphbet");
    }
    else
    {
         printf(" the given character is not a alphbet");
    }
}

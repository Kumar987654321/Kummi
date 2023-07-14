#include<stdio.h>
#include<string.h>
int main()
{
    int i,c;
    char s[100];
    printf("enter your string");
    //scanf("%s ",&s);
    fgets(s,sizeof s,stdin);
    c=strlen(s);
    for(i=c-1;i>=0;i--)
    {
        printf("%c ",s[i]);
    }
    printf("\n");
}


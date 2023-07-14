#include<stdio.h>
int main()
{
    int i,c;
    char s[100];
    printf("enter your string :");
    fgets(s,sizeof s,stdin);
    i=0;
    c=1;
    while(s[i]!='\0')
    {
        if(s[i]==' ' || s[i]=='\n' || s[i]=='\t')
            {
            c++;
            }
    }
    i++;
    printf("%d",c-1);
}

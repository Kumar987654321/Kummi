#include<stdio.h>
int main()
{
    char str[100];
    char l=0;
    printf("enter the strings");
   // scanf("%s",&str);
    fgets(str,sizeof(str),stdin);

    while(str[l]!='\0')
    {
        printf("%c ",str[l]);
        l++;
    }
}

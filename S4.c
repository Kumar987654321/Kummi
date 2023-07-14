#include<stdio.h>
int main()
{
    char str[23];
    printf("enter your string\n");
    //scanf("%s",&str);
    fgets(str,sizeof(str),stdin);
    printf("here your string is :-");
    puts(str);
}

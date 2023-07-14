#include<stdio.h>
int main()
{
    char str[78];
    fgets(str,sizeof(str),stdin);
    printf("%s \n",str);
    printf("is this is the first character of your string %c\n",str[0]);

}

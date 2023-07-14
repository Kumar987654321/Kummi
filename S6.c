#include<stdio.h>
int main()
{
    char str[100];
    int l=0;
    printf("enter your string :-\n");
    fgets(str,sizeof(str),stdin);
    while(str[l]='\0')
    {
        l++;
    }
    printf("the length of the string is %d\n\n",l);

}

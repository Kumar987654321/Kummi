//write a progrm to remove blank spaces in the string

#include<stdio.h>
int main()
{

    char s,i;
    printf("enter  a string ");
    scanf("%s",&s);
    while(s[i]!='\0')
    {
        if(s[i]==" ")
        {
            s[i]=s[i+1];
            s[i+1]=" ";

        }
    printf(" ");
    }

}

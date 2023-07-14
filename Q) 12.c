#include<stdio.h>

void print( char s[50])
{
static int i=0;

    if(i<10)
    {
        printf("%s \n",s);
        i++;
        print(s);
    }
    }


int main()
{
    char s[30] = "THANK YOU BRIGOSHA";
    print(s);
}

//find qudrant
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("enter the numbers");
    scanf("%d %d",&n1,&n2);
    if(n1 > 0 && n2 > 0)
    {
        printf("first");
    }
    else if(n1 < 0 && n2 >0)
    {
        printf("second");
    }
    else if(n1 < 0 && n2 < 0)
    {
        printf("third");
    }
    else if(n1 > 0 && n2 < 0)
    {
        printf("Fourth");
    }
    else if ( n1 ==0 && n2 ==0)
    {
        printf("it's origin");

    }
}

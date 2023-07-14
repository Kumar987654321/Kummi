//leap year or not"
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if((n%4==0)||(n%100==0)||(n%400==0))
    {
        printf("it's leap year");

    }
    else{
        printf("it's not a leap year");
    }
}

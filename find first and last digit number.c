#include<stdio.h>
int main()
{
    int n,l,f,digit;
    printf("enter the number");
    scanf("%d",&n);
    l=n%10;
    digit=(int)log10(n);
     //firstDigit = (int)(n / pow(10, digits));
    f=(int)(n/pow(10,digit));
    printf("first digit=%d\n",f);
    printf("Last digit=%d",l);
}
 #

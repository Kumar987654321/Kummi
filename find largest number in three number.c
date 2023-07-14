#include<stdio.h>
int main()
{

 float a,b,c;
 //printf("enter the three number");
 scanf("%f %f %f ",&a,&b,&c);

if(a >= b && a >= c)

    printf("the a is greater %.2f",a);

if(b >= c && b >= a)

    printf("the b is grater %.2f",b);


if(c >= a && c >= b)

    printf("the c is greater %.2f",c);
    return 0;

}




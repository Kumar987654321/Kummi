#include<stdio.h>
int main()
{
    int x=21;
    int c;

    c = x;
    printf("= operator result is :%d\n",c);

    c += x;
    printf("+= Operator result is : %d\n",c);

    c -= x;
    printf("-= Operator result is : %d\n",c);

    c *= x;
    printf("*= Operator result is : %d\n",c);


     c /= x;
    printf("/= Operator result is : %d\n",c);

     c=200;
     c %= x;
    printf("%%= Operator result is : %d\n",c);

     c <<= 2;
    printf("<<= Operator result is : %d\n",c);

    c >>= 2;
    printf(">>= Operator result is : %d\n",c);

     c &= 2;
    printf("&= Operator result is : %d\n",c);

     c ^= 2;
    printf("^= Operator result is : %d\n",c);

     c |= 2;
     printf("|= operator result is : %d\n",c);

    }


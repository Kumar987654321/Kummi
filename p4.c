
#include<stdio.h>
int main()
{

    int n1,n2;
    printf("ENTER YUOR TWO NUMBERS :");
    scanf("%d %d",&n1,&n2);
    printf(" before swapping numbers %d %d\n",n1,n2);
    n1^=n2;
    n2^=n1;
    n1^=n2;
    printf("after swapping numbers %d %d",n1,n2);
}

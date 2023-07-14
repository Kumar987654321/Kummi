#include<stdio.h>
int main()
{
    char ca;
    int a,b;
    printf("enter the operator(+,-,*,%):- ");
    scanf("%c",&ca);
    scanf("%d %d",&a,&b);

    switch (ca){

        case '+':
            printf("%d+%d=%d",a,b,a+b);
            break;
         case '-':
            printf("%d-%d=%d",a,b,a-b);
            break;
            case '*':
            printf("%d*%d=%d",a,b,a*b);
            break;
            case '%':
            printf("%d % %d =%d",a,b,a%b);
            break;
    }
}


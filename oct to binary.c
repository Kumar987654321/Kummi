#include<stdio.h>
#define MAX 1000
int main()
{
    char ON[MAX];
    int i=0;
    printf("enter any octal number:");
    scanf("%s",ON);
    printf("Binary value is:");
    while(ON[i])
    {
        switch(ON[i])
        {
        case '0':
            printf("000");
            break;
        case '1':
            printf("001");
            break;
        case '2':
            printf("010");
            break;
        case '3':
            printf("011");
            break;
        case '4':
            printf("100");
            break;
        case '5':
            printf("101");
            break;
        case '6':
            printf("110");
            break;
        case '7':
            printf("111");
            break;
        default:
            printf("Invalid entry");
            return 0;
        }
        i++;
    }
    return 0;
}

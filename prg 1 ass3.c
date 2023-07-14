#include<stdio.h>
int main()
{
    int a[8];
    printf("Enter an byte:");
    for(int i=0;i<7;i++)
    {
        scanf("%d\t",&a[i]);
    }
    printf("5th bit of entered byte is:%d\n\n",a[2]);
    printf("7th bit of entered byte is:%d",a[0]);
}

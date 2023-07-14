#include<stdio.h>
int swap(int* ,int* );
int main()
{
    int a,b;
    printf("enter the values\n");
    scanf("%d %d",&a,&b);
    swap(&a,&b);

}
int swap(int *a,int *b)
{
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("After the swapping values %d %d",*a,*b);
}

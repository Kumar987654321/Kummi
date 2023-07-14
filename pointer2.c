#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5};
    int i;
    for(i=0;i<5;i++)
    {
        printf("Address of = %d\n",&a[i]);
         printf("Address of = %d\n",a+i);
        printf("value of =%d\n",a[i]);
        printf("value of =%d\n",*(a+i));
    }


}

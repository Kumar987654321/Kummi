#include<stdio.h>
int main()
{
    int a=10;
    int *ptr=&a;
   // ptr=&a;
//    printf(" the value of address %d\n",*ptr);
//   // printf("the value of %d\n",a);
//     printf("address of variable %d\n",ptr);
//     printf("address of variable %d\n",&ptr);
//     printf("address of variable %d\n",&a);
    char *p0;
p0=(char*)ptr;
printf("%d\n",sizeof(char));
printf("%d %d\n",p0,*p0);
}

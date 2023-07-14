#include<stdio.h>
int main()
{
    int x=3;
    int *p;
    p=&x;
    *p=6;
    int **q;
    q=&p;
    int ***w;


    w=&q;
    printf("the value %d\n",*p);
    printf("the address is %d\n",p);
    printf("the address of q is %d\n",q);
    printf("the value %d\n",**q);
  ***w=10;
      printf("the value %d\n",***w);
}

#include<stdio.h>
int swap(int *a,int *b)
{
    int *temp;
    *temp=*a;
    *a=*b;
    *b=*temp;
//return a;
//return b;
//printf("%d %d",a,b);

}

int main()
{
  int a,b;
  printf("enter the value :");
 // scanf("%d %d",&a,&b);
 swap(&a,&b);
 printf("%d %d",a,b);
  //printf("%d",c);
}

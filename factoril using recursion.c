#include<stdio.h>
int fact(int );
int main()
{
  int n;
  printf("enter the number ");
  scanf("%d ",&n);
 // r=fact(n);
  printf("%d\n",fact(n));
  return 0;

}
int fact(int n)
{
    if(n>=1)

        return n*fact(n-1);
    else
    return 1;
}

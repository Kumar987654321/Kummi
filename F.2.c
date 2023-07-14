#include<stdio.h>
float square(int );
int main()
{
    float n ,f;
    printf("enter the number :");
    scanf("%f",&n);
    f=square(n);
    printf("%.2f",f);

}
float square(int b)
{
  return b*b;
}
























/*{
    float n,square;
    printf("enter the number ");
    scanf("%f",&n);
    square=n*n;
    printf("%.2f",square);
}*/

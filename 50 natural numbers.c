/*#include<stdio.h>
int main()
{
int n,i;
printf("enter the number");
//scanf("%d",&n);
for(i=0;i<=50;i++)
{
printf("%d\n",i);
}
printf("\n");

}*/
#include<stdio.h>
int main()
{
    int n,g;
    printf("enter the number \n");
    scanf("%d",&n);
    g=natural(n);
    printf("%d",g);

}
int natural(int n)
{
    if(n<50)
    {
        printf("%d\n",n);
        natural(n+1);
    }
}

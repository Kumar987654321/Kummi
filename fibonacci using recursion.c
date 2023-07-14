#include<stdio.h>
int term;
int fab( int n1,int n2);
int main()
{
    int n1=0,n2=1;
    printf("enter the number");
    scanf("%d",&term);
    fab(n1,n2);
}
int fab(int n1,int n2)
{
    int n3;
   static int i=1;
    if(i==term)

    {
        return 0;
    }
    else{
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d",n3);
        i++;
        fab(n1,n2);
    }
    return 0;
}

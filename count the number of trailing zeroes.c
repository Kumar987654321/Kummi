#include<stdio.h>
int main()
{
    int a[5],i,n,count;
    printf("enter the number");
    scanf("%d",&n);
    while(n!='\0')
    {
        a[i]=n%2;
        i++;
        n=n/2;

    }
    for(i=0;a[i]!='\0';i++)
    {
        int count;
        if(a[i]==0)
        {
            count++;
        }
    }
    printf("%d",count);
}

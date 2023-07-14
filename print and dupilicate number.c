#include<stdio.h>
int main()
{
    int a[100];
    int n,c=0,i,l,j,c1=0;
printf("enter the elements :");
scanf("%d",&n);

for(i=0;n>0;i++)
{
    a[i]=n%10;
    n=n/10;
    c++;
}
//for(i=c-1;i>=0;i--)

//printf("%d",a[i]);

for(i=0;i<c;i++)
{

    for(j=0;j<c;j++)
    {
        int temp=0;
        if(a[i]<a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
        for(i=0;i<c;i++)
        {

        printf("%d",a[i]);
    }
    printf("\n");
    i=0;
 for(i=i;i<c;i++)
 {
     int c1=1;
     for(j=i+1;a[i]==a[j];j++)
     {
        c1++;
     }
   //  printf("%d\t",c1);
    i=j-1;
    if(c1>1)
    {
    printf("%d->%d\n",a[i],c1);

    }
 }




    }



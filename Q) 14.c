#include<stdio.h>
void main()
{
    int a[5]={1,2,3,4,5};
    int b[5]={6,7,8,9,10},c[10];
    int i,k=0,j,t,kk=5;
    for(i=0;i<5;i++)
    {
        c[k++]=a[i];
        //c[k++]=b[i];
    }
for(i=0;i<5;i++)
    {
        c[kk++]=b[i];
        //c[k++]=b[i];
    }

    for(i=0;i<10;i++)


        for(j=i+1;j<10;j++)
        {
        if(c[i]<c[j])
    {
        t=c[i];
        c[i]=c[j];
        c[j]=t;
    }
        }
    for(i=0;i<10;i++)
    {
        printf("%d\t",c[i]);
    }

}


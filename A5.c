#include<stdio.h>
int main()
{
    int n,a[100],i;
    int a2[100];
    int a3[100];
    int c=1,ctr=0;
    int j;
    printf("enter the number");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        a2[i]=a[i];
        a3[i]=0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a2[j])
            {


            a3[j]==c;
            c++;

        }
    }
    c=1;

}
for(i=0;i<n;i++)
{
    if(a3[i]==2)
    {
        ctr++;
    }
    printf("%d\n",ctr);
}
}

#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the number\n");
    scanf("%d",&n);
    int *A=(int*)calloc(n,sizeof(int));
//    for(i=0;i<n;i++)
//    {
//        A[i]=i+1;
//    }
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
}

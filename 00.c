#include<stdio.h>
int main()
{
    int n1=0,n2=1;
    int n3,n;
    printf("enter the number:");
    scanf("%d",&n);

    printf("%d\t %d\t",n1,n2);
    while(n2<n){
    n3=n1+n2;
    n1=n2;
    n2=n3;
    if(n3<=n){

    printf("%d\t",n3);
}}}

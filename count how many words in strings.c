#include<stdio.h>
int main()
{
char a[100];
int l,w,i;
printf("enter the elements ");
fgets(a,sizeof a,stdin);
l=0,w=0;
while(a[i]!='\0')
{
   if(a[i]=='\0' || a[i]==' '|| a[i]=='\t')
   {
   w++;

   }
   l++;
    }
printf("%d",w-1);
}


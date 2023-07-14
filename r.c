#include<stdio.h>
int main()
{
int i=1;
//for(i=1;i<=100;i++)
//while(i<=100)
do
{
    if(i%10==0)
{
printf("%d\n",i);
    if(i==60){
break;
}
}
i++;
}while(i<=100);
}

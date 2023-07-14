//pointer on strings
#include<stdio.h>
int main()
{
    char str[6]="Kumar";
    int *ptr;
   // int i;
    ptr=str;
    //for(i=0;ptr[i]='\0';i++)
        //printf("&str[%d]=%p\n",i,ptr+i);
    printf("%s",ptr);
}

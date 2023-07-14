#include<stdio.h>
int main()
{
    char tr[100];
   printf("enter a strings \n");
    //scanf("%s",&str);
   fgets(tr,sizeof(tr),stdin);
    printf("%u",strlen(tr));
    //puts(strlen(str));


}

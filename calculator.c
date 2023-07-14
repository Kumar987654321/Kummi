//calculator using case
#include<stdio.h>
int main()
{
    int n1,n2,opt;
    printf("enter the number ");
    scanf("%d %d",&n1,&n2);
    printf("select your opt ");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:
        printf("%d of %d is %d\n ",n1,n2,n1+n2);
        break;

          case 2:
        printf("%d of %d is %d\n ",n1,n2,n1-n2);
        break;
          case 3:
        printf("%d of %d is %d\n ",n1,n2,n1*n2);
        break;
          case 4:
          if(n2==0)
          {
              printf("the second integer is zero, the result is zero");

          }
          else{
        printf("%d of %d is %d\n ",n1,n2,n1/n2);
          }
        break;
          case 5:
        printf("%d of %d is %d\n",n1,n2,n1%n2);
        break;
          default:
            {
                printf("input correct option");
                break;
            }
            }
}

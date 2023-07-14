#include<stdio.h>
int main()
{
int a1[100];
int a2[100];
int a3[100];
int n,i,j=0,k=0;

printf("enter the numbers :");
scanf("%d",&n);
for(i=0;i<n;i++)
    {
       scanf("%d",&a1[i]);
    }
  for(i=0;i<n;i++)
    {
      if(a1[i]%2==0)
        {
             a2[j]=a1[i];
               j++;
        }
     else
        {
          a3[k]=a1[i];
          k++;
        }
    }
    printf("\nthe even elements are :\n");
            for(i=0;i<j;i++)
            {
              printf("%d\n",a2[i]);
            }

    printf("\nthe odd elements are :\n");
               for(i=0;i<k;i++)
            {
              printf("%d\n",a3[i]);
            }
    printf("\n");
}

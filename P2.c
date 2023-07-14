//write a function to print HOT or COld depending on temperature grading entered by the user
#include<stdio.h>
int main()
{

    int a;
    printf("enter the value of f",a);
    scanf("%d",&a);
    printf("%d",temp(a));

}
int temp(int a)
{
    if(temp>=273+a)
    {
        printf("the value is temperature is hot");

    }
    else{
         printf("the value is temperature is cold");
    }
}

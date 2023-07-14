#include<stdio.h>
char strrev( );
int main()
{
   // char a[20];
    printf("enter a string");
   // scanf("%s",&a);
    strrev();
}
char strrev( )
{
    char a;
    scanf("%c",&a);
    if(a!= '\n')
       strrev( );
    printf("%c",a);

}

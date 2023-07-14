#include<stdio.h>
int main()
{
static int c=0;
if(c<5)
{
printf(" kumar\n");
c++;
main();
}

}

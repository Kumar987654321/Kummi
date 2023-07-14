#include<stdio.h>
int main()
{
    char c;
    printf("enter your character");
    scanf("%c",&c);
    if((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u')||(c=='A')||(c=='E')||(c=='I')||(c=='O')||(c=='U'))

{
    printf("the alphbet is vowel");
}
else{
    printf("the alphbet is constant");
}
}

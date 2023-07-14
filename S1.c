#include<stdio.h>
int main()
{
  char str[100];
  printf("enter your string :- ");
  fgets(str,sizeof(str),stdin);
  printf("the string is:- ");
  puts(str);

}

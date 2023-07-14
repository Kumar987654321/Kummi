#include<stdio.h>
int main()
{
    int c;
    //scanf("%c",&c);
    for(c=0;c<26;c++);
        {
           printf("%c = %d | %c=%d\n",'A'+c,'A'+c,'a'+c,'a'+c);
        }
    getch();
}

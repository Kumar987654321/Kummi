#include<stdio.h>
int main()
{
    int i,n;
    printf("\n\n\n");
    for(i='A';i<'Z';i++)
    {
        if(i=='D'||i=='J'||i=='P'||i=='V')
        {
            printf("%c",i);
        }
        else{
            printf(" ");
        }
    }
        printf("\n");
    for(i='A';i<'Z';i++)
    {
        if(i=='C'||i=='E'||i=='I'||i=='K'||i=='O'||i=='Q'||i=='U'||i=='W')
        {
             printf("%c",i);
        }
        else{
            printf(" ");
        }

    }
        printf("\n");
        for(i='A';i<='Z';i++)
    {
        if(i=='B'||i=='F'||i=='H'||i=='L'||i=='N'||i=='R'||i=='T'||i=='X'||i=='Z')
        {
            printf("%c",i);
        }
        else{
            printf(" ");
        }

    }
        printf("\n");
            for(i='A';i<'Z';i++)
    {
        if(i=='A'||i=='G'||i=='M'||i=='S'||i=='Y')
        {
            printf("%c",i);
        }
        else{
            printf(" ");
        }

    }
        printf("\n");
}

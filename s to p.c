#include<stdio.h>
struct std
{
    int num;
    float marks;
    char name[60];
};
int main()
{
    struct std v={1,77,"kumar"};
    struct std *ptr;
     ptr=&v;
    printf("%d %.2f %s",ptr->num,ptr->marks,ptr->name);
}


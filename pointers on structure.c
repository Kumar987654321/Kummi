#include<stdio.h>

struct std
{
    int number;
    char name[100];
    float marks;
};
int main()
{
    struct std s;
    struct std *st;
    printf("Enter a s number,sname,smarks\n");
    scanf("%d %s %f",&s.number,&s.name,&s.marks);
    st=&s;
    printf("number=%d\n",st->number);
     printf("name=%s\n",st->name);
      printf("marks=%.2f\n",st->marks);
}

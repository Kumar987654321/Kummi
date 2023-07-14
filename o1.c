#include<stdio.h>
struct std{

   int num;
   float marks;
   char name[30];

};
int main()
{
    struct std s={10,35.5,"kumar"};
    //scanf("%d %f %c",&num,&marks,&name);
    printf("%d %.2f %s",s.num,s.marks,s.name);

}

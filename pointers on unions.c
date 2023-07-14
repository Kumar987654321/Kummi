//pointers on unions
#include<stdio.h>
struct ijk{
 int i;
 char b;
 float c;
 };
 union ijk *z
 {
 int *z=i;
 char *z=j;
 float *z=k;
 printf(*z->i,*z->j,*z->k);

 }

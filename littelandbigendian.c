#include<stdio.h>
int main()
{
int a,b,c,d,e;
int v=0xAABBCCDD;
a=(v&0x000000ff)<<24;8
b=(v&0x0000ff00)<<8;
c=(v&0x00ff0000)>>8;
d=(v&0xff000000)>>24;
e=a|b|c|d;
printf("%x",e);

}

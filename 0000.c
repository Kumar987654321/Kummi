#include<stdio.h>
int main()
{
    int height,width,area,perimeter;
    printf("enter the height of the rectangle:");
    scanf("%d",&height);
    printf("enter the width of the rectangle:");
    scanf("%d",&width);
    area=height*width;
    printf("area of the rectangle =%d\n",area);
    perimeter=2*(height + width);
    printf("perimeter of the rectangle =%d",perimeter);

}

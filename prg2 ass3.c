#include<stdio.h>
struct student
{
    int id;
    float percentage;
};
void fun(struct student *record);
int main()
{
    struct student record;
    record.id=10;
    record.percentage=92.1111;
    fun(&record);
    return 0;
}
void fun(struct student *record)
{
    printf("Student id is:%d\n",record->id);
    printf("Student id is:%f",record->percentage);
}

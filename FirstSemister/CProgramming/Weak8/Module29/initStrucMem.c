#include<stdio.h>
struct student
{
    char name[50];
    int roll;
    int age;
    float result;
};
int main(void)
{
    struct student s1 = {"Mahedi Hasan",438820,20,3.88};
    struct student s2 = {"Imran Hossen",438883,22,4.00};
    printf("\n\nStudent Info 1 :\n");
    printf("Name: %s\nRoll: %d\nAge: %d\nResult: %0.3f\n",s1.name,s1.roll,s1.age,s1.result);
    printf("\n\nStudent Info 2 :\n");
    printf("Name: %s\nRoll: %d\nAge: %d\nResult: %0.3f\n",s2.name,s2.roll,s2.age,s2.result);
    return 0;
}
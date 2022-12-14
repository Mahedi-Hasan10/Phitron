#include<stdio.h>
struct student
{
    double weight;
    int roll;
};

int main()
{
    struct student s = {.roll = 438820, .weight = 46.50};
    struct student* s1;
    s1 = &s;

    printf("Roll : %d, Weight : %0.2lf\n",s1->roll,s1->weight);
    

    return 0;
}
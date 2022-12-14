#include<stdio.h>
struct student
{
    double weight;
    int roll;
};

int main()
{
    struct student s[10];
    int i;
    for(i=i;i<=10;i++)
    {
        s[i].roll = 438800+i;
        s[i].weight = 45.55+i*2;
    }
    for(i=1;i<=10;i++)
    {
        printf("Roll : %d, Weight : %0.3lf\n",s[i].roll,s[i].weight);
    }

    return 0;
}
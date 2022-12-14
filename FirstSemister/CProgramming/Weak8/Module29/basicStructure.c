#include<stdio.h>
struct Students
{
    int id;
    int age;
    float weight;
};
int main()
{
    struct Students s;
    s.id = 1;
    s.age = 20;
    s.weight = 46.55;
    
    printf("Weight is %d\n",s.id);
    printf("Weight is %d\n",s.age);
    printf("Weight is %f\n",s.weight);
    return 0;
}
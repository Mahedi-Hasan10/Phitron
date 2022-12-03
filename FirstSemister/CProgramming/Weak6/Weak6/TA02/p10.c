#include<stdio.h>
void my_grade(int n);
int main()
{
    int n;
    scanf("%d",&n);
    my_grade(n);

    return 0;
}
void my_grade(int n)
{
    if(n>=80 && n<=100)
        printf("A\n");
    else if(n>=60 && n<=79)
        printf("B\n");
    else if(n>=40 && n<=59)
        printf("C\n");
    else if(n>=0 && n<=39)
        printf("F\n");
}
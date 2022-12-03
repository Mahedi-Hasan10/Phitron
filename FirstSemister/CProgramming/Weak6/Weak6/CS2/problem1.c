#include<stdio.h>
int sum_of_two_num(int x,int y)
{
    int summ = x + y;
    return summ;
}
void print_of_two_num(int sum)
{
    printf("%d\n",sum);
}
int main()
{
    int sum = sum_of_two_num(10,20);
    print_of_two_num(sum);
}
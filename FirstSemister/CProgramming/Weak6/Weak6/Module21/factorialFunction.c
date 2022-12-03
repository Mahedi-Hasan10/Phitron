#include<stdio.h>
int get_factorial(int x)
{
    int i,fact=1;
    for(i=1;i<=x;i++)
        fact*=i;
    return fact;
}

int main()
{
    int n;
    scanf("%d",&n);
    int fact = get_factorial(n);;
    printf("Factorial is : %d\n",fact);
    return 0;
}
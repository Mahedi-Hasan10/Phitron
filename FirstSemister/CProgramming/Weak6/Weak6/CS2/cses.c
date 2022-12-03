#include<stdio.h>

int fact(int n);
int main(void)
{

    int sum = fact(1)/1 + fact(2)/2 + fact(3)/3 + fact(4)/4 + fact(5)/5;
    printf("%d",sum);

    return 0;
}
int fact()
{
    int facto = 1,i;
    for(i=5;i>1;i--)
    {
        facto*=i;
    }
    return facto;
}

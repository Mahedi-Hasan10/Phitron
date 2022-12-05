#include<stdio.h>
int main()
{
    int a = 10;
    double b = 10.23;
    printf("a = %d, b = %lf\n",a,b);

    a = (double)b;
    printf("a = %lf\n",a);
    
    return 0;
}
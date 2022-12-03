#include<stdio.h>
float get_pi(void)
{
    return 3.1416;
}
int main(void)
{
    float pi = get_pi();
    printf("%f\n",pi);
}
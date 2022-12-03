#include<stdio.h>
int main()
{
    int a = 5;
    printf("%d\n",a);

    int* p;
    p = &a;
    *p = 10;
    printf("%p\n",p);
    printf("%d\n",*p);

    int** q;
    q = &p;
    printf("%p\n",q);
    **q = 20;
    printf("%d\n",a);

    return 0;
}
#include<stdio.h>
void swap(int* x, int* y);
int main()
{
    int a,b;
    printf("Enter two number you want to swap : ");
    scanf("%d %d",&a,&b);
    printf("Before swapping : a = %d and b = %d\n",a,b);
    swap(&a,&b);
    printf("After swapping : a = %d and b = %d\n",a,b);
    return 0;
}
void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
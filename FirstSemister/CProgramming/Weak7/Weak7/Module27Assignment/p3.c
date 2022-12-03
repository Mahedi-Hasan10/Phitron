#include<stdio.h>
int main(void)
{
    int x,y;
    scanf("%d %d",&x,&y);
    int* ptrX = &x;
    int* ptrY = &y;
    printf("%d %d\n",*ptrX,*ptrY);
    return 0;
}
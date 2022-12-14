#include<stdio.h>
void recar(int start, int end)
{
    printf("%d ",start);
    if(start==end)
        return;
    start++;
    recar( start, end);
}
int main()
{
    int n;
    scanf("%d",&n);
    recar(1,n);
}
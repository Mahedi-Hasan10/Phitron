#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int ara[1001];
    int sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
        sum+=ara[i];
    }
    printf("%d ",sum);
    return 0;
}
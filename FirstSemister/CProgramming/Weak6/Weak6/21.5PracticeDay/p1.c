#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    if(n>0)
    {
        for(i=n;i>=-n;i--)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    else if(n<0)
    {
        for(i=-n;i!=n;i++)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
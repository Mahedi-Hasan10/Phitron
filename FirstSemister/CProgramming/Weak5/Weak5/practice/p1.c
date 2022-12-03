#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);

    if(n>0)
    {
        for(i=n;i>=-n;i--)
        {
            printf("%d ",i);
        }
    }
    else if(n<0)
    {
        for(i=n;i<=0;i++){
            printf("%d ",i);
        }
        for(j=0;j<=n;j++){
            printf("%d ",j);
        }
    }


    return 0;
}
#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int ara[101][101];
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            scanf("%d",&ara[i][j]);
        }
    }
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {

            if(ara[i][j] == i && ara[i][j] == j)
            {
                printf("%d ",(ara[i][j])+3);
            }
            else if(ara[i][j] == i)
            {
                printf("%d ",(ara[i][j])+2);
            }
            else if(ara[i][j] == j)
            {
                printf("%d ",(ara[i][j])+1);
            }
            else 
            {
                printf("%d ",ara[i][j]);
            }
        }
        printf("\n");
    }
}

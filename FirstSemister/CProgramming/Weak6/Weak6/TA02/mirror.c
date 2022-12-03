#include<stdio.h>
int main()
{
    int n, i, j,k;
    scanf("%d", &n);

    if(n==1)
    {
        printf("%d", 1);
        return 0;
    }

    for (i = 1; i <= n; i++)
    {
        printf("%d", i);
    }

    printf("\n");
    for (i = 2, k = n-1; i <= n - 1,k>=2; i++,k--)
    {
        printf("%d", i);
        
        for (j = 2; j <= n - 1; j++)
        {
            printf(" ");
        }
        printf("%d\n", k);

        
    }
    

    for (i = n; i >= 1; i--)
    {
        printf("%d", i);
    }    

    return 0;
}
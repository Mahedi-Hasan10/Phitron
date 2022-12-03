#include <stdio.h>

int main()
{
    int N=3, M=3, i, j;

    int a[N][M];
    printf("Provide %dx%d\n", N, M);
    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
            scanf("%d ", &a[i][j]);
        }
    }

    printf("Transpose\n");
    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }


    return 0;
}
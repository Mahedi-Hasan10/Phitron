#include<stdio.h>
int main()
{
    int i,j;
    int mat1[3][3];
    int mat2[3][3];
    printf("Enter the values of matrix1 : \n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&mat1[i][j]);

    printf("Enter the values of matrix2 : \n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&mat2[i][j]);
    printf("Sum of the total two matrix : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",mat1[i][j]+mat2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
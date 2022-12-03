#include<stdio.h>
int main()
{

    int i,j,row,col;
    printf("Enter the size of total CT : ");
    scanf("%d",&row);
    printf("Enter the size of total marks : ");
    scanf("%d",&col);
    int marks[row][col];

    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
            scanf("%d",&marks[i][j]);

    printf("\n");
    
    for(i=0;i<row;i++)
    {
        printf("CT-%d : ",i);
        for(j=0;j<col;j++)
        {
            printf("st[%d][%d]=%d      ",i,j,marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
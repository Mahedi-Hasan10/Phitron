#include <stdio.h>

int main()
{
    int i,j,n=3;
    int n1,n2,n3,flag, ara[3][3];
    for (i = 0; i <n; i++)
    {
        for ( j = 0; j<n; j++){
            scanf("%d",&ara[i][j]);
        }
    }
    for (i = 0; i<n; i++)
    {
        n1 = 0;
        for (j = 0; j < n; j++)
        {
            n1 = n1 + ara[i][j];
        }

    }
    n2 = 0;
    for (i= 0; i < n; i++)
    {
        for (j = 0; j<n; j++)
        {
            if (i == j)
            {
                n2 = n2 + ara[i][j];
            }
        }
        if (n1 == n2)
        {
                flag = 1;
        }

        else
        {
            flag = 0;
            break;
        }
    }
    for (i = 0; i<n; i++)
    {
        n3 = 0;
        for (j = 0; j<n; j++)
        {
            n3 = n3 + ara[j][i];
        }
        if (n1 == n3)
        {
            flag = 1;
        }

        else
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
      printf("\nYES\n");
   else
      printf("\nNO\n");

   return 0;
}
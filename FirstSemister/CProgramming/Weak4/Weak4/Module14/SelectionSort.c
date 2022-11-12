#include<stdio.h>
int main()
{
    int N=8,i,j,min,m_idx;
    int ara[8] = {7,9,3,2,15,12,6,5};
    int sorted_arr[N];

    for(i=0;i<N;i++)
    {
        printf("%d ",ara[i]);
    }
    printf("\n");

    for(j = 0;j<N;j++)
    {
        min = ara[0];
        m_idx = 0;
        for(i=0;i<N;i++)
        {
            if(ara[i] < min)
            {
                min = ara[i];
                m_idx = i;
            }
        }
        sorted_arr[j] = min;
        ara[m_idx] = 9999;
        for(i=0;i<N;i++)
        {
            printf("%d ",ara[i]);
        }
        printf("\n");
    }

    for(i=0;i<N;i++)
    {
        printf("%d ",sorted_arr[i]);
    }
    printf("\n");

    return 0;
}
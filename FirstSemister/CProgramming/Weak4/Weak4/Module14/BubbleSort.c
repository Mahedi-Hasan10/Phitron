#include<stdio.h>
int main()
{
    int N,i,j;
    printf("Enter the size of the array : ");
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Before Sorting : ");
    for(i=0;i<N;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    int temp = 0;
    for(j=0;j<N;j++)
    {
        for(i=0;i<N-1;i++)
        {
            if(arr[i] > arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    printf("After Sorting : ");
    for(i=0;i<N;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}
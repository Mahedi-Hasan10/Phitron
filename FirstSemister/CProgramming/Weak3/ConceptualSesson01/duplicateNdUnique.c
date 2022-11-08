#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int input[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&input[i]);
    }
    int largestElement = input[i];
    for(i=1;i<=n;i++)
    {
        if(input[i] > largestElement)
            largestElement = input[i];
    }

    int arr[largestElement+1];
    for(i=1;i<=largestElement;i++)
    {
        arr[i] = 0;
    }
    for(i=0;i<n;i++)
    {
        arr[input[i]]+=1;
    }
    int duplicate = 0, unique = 0;
    for(i=1;i<=largestElement;i++)
    {
        if(arr[i] > 1)
            duplicate++;
        if(arr[i]==1)
            unique++;
    }
    printf("Duplicate item %d\n",duplicate);
    printf("Unique item %d\n",unique);
    return 0;
}
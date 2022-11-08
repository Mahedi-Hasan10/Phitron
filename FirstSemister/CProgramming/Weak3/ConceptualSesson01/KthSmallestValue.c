#include<stdio.h>
int main()
{
    int n,i,k;
    scanf("%d",&n);
    int input[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&input[i]);
    }
    printf("Enter the kth index : ");
    scanf("%d",&k);
    int largestElement = input[0];
    for(i=1;i<n;i++)
    {
        if(input[i] > largestElement)
            largestElement = input[i];
    }

    int arr[largestElement+1];
    for(i=0;i<=largestElement;i++)
    {
        arr[i] = 0;
    }

    for(i=0;i<n;i++)
    {
        arr[input[i]]+=1;
    }
    int count = 0;
    for(i=1;i<=largestElement;i++)
    {
        if(arr[i]==1)
        {
            count++;
        }
        if(count==k)
        {
            printf("%dth smallest number is %d\n",k,i);
            break;
        }
    }
    return 0;
}
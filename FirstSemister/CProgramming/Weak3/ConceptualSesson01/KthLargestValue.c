#include<stdio.h>
int main()
{
    int n,k,i,j;
    scanf("%d%d",&n,&k);
    int input[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&input[i]);
    }

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
        arr[input[i]] +=1;
    }
    int count = 0;
    for(i=largestElement;i>=1;i--)
    {
        if(arr[i]==1)
        {
            count++;
        }
        if(count==k)
        {
            printf("The %dth largest value is %d\n",k,i);
            break;
        }
        
    }


    return 0;
}
/*
-10 5 1 2 7
-3rd largest = 5
1.Input array
2.Find the largest element from the array
3.(largestElement+1) size er new array
4.largestElement+1 size er array er prottekta index e 0 assign kora
5.arr[input[i]]+1
6.

*/
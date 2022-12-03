#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);

    int arr[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int mx = arr[0];
    for ( i = 0; i < n; i++)
    {
        if(arr[i] > mx)
            mx = arr[i];
    }

    printf("\nMaximum value is : %d\n",mx);
    
    return 0;
}
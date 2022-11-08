//Write a program that can print fibonacchi series.
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    int ara[n];
    ara[0] = 0;
    ara[1] = 1;
    for(i=2;i<n;i++)
    {
        ara[i] = ara[i-1] + ara[i-2];
    }
    printf("\nFibonacchi numbers : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",ara[i]);
    }


    return 0;
}
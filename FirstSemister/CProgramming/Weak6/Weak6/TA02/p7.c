#include<stdio.h>
int main()
{

    int num[100];
    int i,j,min,n;

    printf("How many number : ");
    scanf("%d",&n);
    printf("Enter your numbers : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

    for(i=0; i<n; i++)
    {
        min = i;
        for(j=i+1; j<n; j++)
        {

            if(num[j]<num[min])
            {
                min=j;
            }
        }
        int temp=num[i];
        num[i]=num[min];
        num[min]=temp;
    }

    for(i=0; i<n; i++)
    {
        printf("%d ",num[i]);
    }

    printf("\n");
    for(i=0; i<n; i++)
    {
        if(n%2!=0)
        {
            printf("Median is : %d ",num[n/2]);
            break;
        }
        else if(n%2==0)
        {
            int r = num[n/2] + num[(n/2)-1];
            printf("Median is : %d ",r);
            break;
        }
    }
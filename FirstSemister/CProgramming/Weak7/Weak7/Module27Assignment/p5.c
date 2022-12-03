#include<stdio.h>
int sum_of_even_odd(int ara[],int n);
int main(void)
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i = 1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int sum = sum_of_even_odd(arr,n);
    printf("%d\n",sum);

}

int sum_of_even_odd(int ara[],int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        if(i%2==0 && ara[i]%2==0)
            sum+=(i+ara[i]);
        else if(i%2!=0 && ara[i]%2!=0)
            sum+=(i+ara[i]);
    }

    return sum;

}
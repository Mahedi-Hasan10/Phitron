#include<stdio.h>
int get_prime(int* arr, int n);
float get_average_even(int* arr, int n);
int main(void)
{
    int n,i;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++)
        scanf("%d",&ara[i]);

    printf("Prime numbers: %d\n",get_prime(&ara,n));
    printf("Average of all positive integers: %0.2f\n",get_average_even(&ara,n));

    return 0;
}


int get_prime(int* arr, int n)
{
    int j,count=0;
    int flag = 1;
    for(j=0;j<n;j++)
    {
        if(arr[j]==1)
            count++;
        else if(arr[j]==2)
            count++;
        else
        {
            for(int i = 2;i<n;i++)
            {
                if(arr[j]%i==0)
                {
                    flag = 0;
                    break;
                }
            }
        }

        if(flag==1)
            count++;
    }
    return count;
}

float get_average_even(int* arr, int n)
{
    int sum = 0,eva=0;
    for (int i = 0; i < n; i++){
        if (arr[i]%2==0){
            sum+=arr[i];
            eva++;
        }
    }
    float avg = sum/eva;
    return avg;

}
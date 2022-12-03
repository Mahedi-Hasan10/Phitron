/*
There condition will provide
check 
1. one digit must be 7
2. sum of all the digit must be greater than 7
3. last digit must be prime
if all the condition is true then print Mahedi's number else print Not
*/


int present_seven(int n);
int sum_of_dig(int n);
int last_num_prime(int n);
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    if(present_seven(n)== 1 && sum_of_dig(n)>10 && last_num_prime(n)==1)
        printf("Mahedi's number.\n");
    else
        printf("Not.\n");

    return 0;
}

int present_seven(int n)
{
    while(n>0)
    {
        if(n%10==7)
            return 1;
        n/=10;
    }
    return 0;

}
int sum_of_dig(int n)
{
    int sum = 0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;

}
int last_num_prime(int n)
{
    int ld = n%10;
    if(ld== 2 || ld == 3 || ld == 5 || ld == 7)
        return 1;
    else
        return 0;
}
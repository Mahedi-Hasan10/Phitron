//Write a program tha can take some numbers and display maximum
#include<stdio.h>
int main()
{
    int i,n,max=0;
    printf("How many numbers : ");
    scanf("%d",&n); 
    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    max = ara[0];
    for(i=1;i<n;i++)
    {
        if(ara[i] > max)
            max = ara[i];
    }
    printf("Maximum = %d\n",max);


    return 0;
}
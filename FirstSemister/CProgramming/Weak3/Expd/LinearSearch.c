//Linear Search to find a number from an array
#include<stdio.h>
int main()
{
    int n,i,position = -1,value;
    printf("Enter the array size : ");
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    printf("\nEnter the value you want to search : ");
    scanf("%d",&value);
    for(i=0;i<n;i++){
       if(value==ara[i])
       {
            position = i+1;
            break;
       }
    }
    if(position==-1)
        printf("Not Found\n");
    else
        printf("The position of %d is = %d\n",position,value);
    return 0;
}
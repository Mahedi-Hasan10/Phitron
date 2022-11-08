//Copy items from one array to another array...
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the array size : ");
    scanf("%d",&n);
    int ara[n];
    int ara2[n];
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    printf("\nArray = ");
    for(i=0;i<n;i++){
        printf("%d ",ara[i]);
    }
    printf("\nArray2 = ");
    for(i=0;i<n;i++){
        ara2[i] = ara[i];
        printf("%d ",ara2[i]);
    }
    
    
    return 0;
}
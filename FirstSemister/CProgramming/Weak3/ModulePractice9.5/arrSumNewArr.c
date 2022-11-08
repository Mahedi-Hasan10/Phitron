#include<stdio.h>
int main()
{
    int i,j,n,totalIndeAdd;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&totalIndeAdd);
    int indexArr[totalIndeAdd];
    for(j=0;j<totalIndeAdd;j++)
    {
        scanf("%d%d",&i,&indexArr[j]);
        arr[i]+=indexArr[j];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
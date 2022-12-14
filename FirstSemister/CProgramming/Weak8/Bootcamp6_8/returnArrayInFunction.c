#include<stdio.h>
#include<stdlib.h>
int inputArray(int sz)
{
    int* ptrArr = (int*) malloc(sz * sizeof(int));
    for(int i=0;i<sz;i++)
    {
        scanf("%d",&ptrArr[i]);
    }
    return ptrArr;
}
int main(void)
{

    int n;
    scanf("%d",&n);
    int* ptrArray = inputArray(n);
    for(int i = 0;i<n;i++)
        printf("%d ",ptrArray[i]);
    return 0;
}
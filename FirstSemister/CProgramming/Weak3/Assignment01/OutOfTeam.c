#include<stdio.h>
int main()
{
    int n,k, i,out;
    int arr[100];
    scanf("%d%d",&n,&k);

    out=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]<k)
        {
            out++;
        }
    }
    printf("%d\n",out);
    return 0;
}
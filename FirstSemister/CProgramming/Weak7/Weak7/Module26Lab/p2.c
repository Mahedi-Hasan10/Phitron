#include<stdio.h>
void find_max_min(int n, int nums[],int* p,int* q)
{
    *p = nums[0];
    *q = nums[0];
    int i;
    for(i=0;i<n;i++)
        if(nums[i] > *p)
            *p = nums[i];
        if(nums[i] < *q)
            *q = nums[i]; 
}int main()
{
    int ara[] = {12,23,15,26,74,75,22,2,94,45,555,65};
    int n = 12;
    int maxx,minn;
    find_max_min(n,ara,&maxx,&minn);

    printf("%d %d\n",maxx,minn);
    return 0;
}
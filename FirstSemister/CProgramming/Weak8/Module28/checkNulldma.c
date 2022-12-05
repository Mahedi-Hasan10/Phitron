#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int* ptr;

    ptr = (int*) malloc(n*sizeof(int));
    
    if(ptr == NULL)
    {
        printf("Memory Allocation Failed\n");
    }
    else
    {
        for(i=1;i<=n;i++)
        scanf("%d",(ptr+i));
        for(i=1;i<=n;i++)
        printf("%dth postion is %d\n",i,*(ptr+i));
    }
    
    free(ptr);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n = 5,i;
    int* ptr;
    ptr = (int*) malloc(n*sizeof(int));
    printf("%p\n",ptr);

    if(ptr==NULL)
    {
        printf("Dynamic Memory Allocation Failed\n");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",(ptr+i));
        }
        for(i=0;i<n;i++)
        {
            printf("%dth position is %d\n",i,*(ptr+i));
        }
    }
    n = 10;
    ptr = realloc(ptr, n*(sizeof(int)));
    printf("%p\n",ptr);
    if(ptr==NULL)
    {
        printf("Dynamic Memory Allocation Failed\n");
    }
    else
    {
        for(i=5;i<n;i++)
        {
            scanf("%d",(ptr+i));
        }
        for(i=0;i<n;i++)
        {
            printf("%dth position is %d\n",i,*(ptr+i));
        }
    }
    free(ptr);
    return 0;
}
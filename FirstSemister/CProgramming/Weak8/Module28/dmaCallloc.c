#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int* ptr;

    ptr =(int*) calloc(n,sizeof(int));

    for(i=1;i<=n;i++)
        scanf("%d",(ptr+i));
    for(i=1;i<=n;i++)
        printf("%dth position is %d\n",i,*(ptr+i));
    free(ptr);
    return  0;
}
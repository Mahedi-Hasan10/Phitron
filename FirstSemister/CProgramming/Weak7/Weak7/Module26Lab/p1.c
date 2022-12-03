#include<stdio.h>
int print_hash(int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("#");
        
    printf("\n");
}
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++)
        print_hash(i);
    return 0;
}
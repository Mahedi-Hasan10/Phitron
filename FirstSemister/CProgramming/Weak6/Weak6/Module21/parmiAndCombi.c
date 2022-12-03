#include<stdio.h>
int fact(int x)
{
    int i,facto=1;
    for(i=1;i<=x;i++)
        facto*=i;
    return facto;
}

int main()
{
    int n,r;
    scanf("%d %d",&n,&r);
    int perm = fact(n) / fact(n-r);
    int combi = fact(n) / (fact(n-r)*fact(r));
    printf("nPr is : %d\n",perm);
    printf("nCr is : %d\n",combi);
    return 0;
}
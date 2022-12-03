#include<stdio.h>
int get_gcd(int x, int y)
{
    int i;
    for(i=x;i>=1;i--)
    {
        if(x%i==0 && y%i==0)
            return i;
    }
}

int main()
{
    int a,b,ans;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    ans = get_gcd(a,b);
    printf("GCD is %d\n",ans);
    return 0;
}
#include<stdio.h>
int main(){

    long long int a, b, c;
    scanf("%lld%lld",&a,&b);
    if(a%2 == 0)
    {
        c = a / 2;
    }
    else
    {
        c = (a + 1) / 2;
    }
    if(b <= c)
    {
       printf("%lld",(b * 2) - 1);
    }
    else
    {
        printf("%lld",(b - c) * 2);
    }
    return 0;
}
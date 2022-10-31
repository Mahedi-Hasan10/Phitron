#include<stdio.h>
int main(){
    long long int n,k,x;
    scanf("%lld%lld",&n,&k);
    if(n%2==0)
        x  = n/2;
    else
        x = (n+1)/2;
    if(k<=x)
        printf("%lld\n",(k*2)-1);
    else
        printf("%lld\n",(k-x)*2);
    return 0;
}
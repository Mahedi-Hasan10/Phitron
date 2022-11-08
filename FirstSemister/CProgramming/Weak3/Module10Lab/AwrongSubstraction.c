#include<stdio.h>
int main(){
    long long int n,i,k;
    scanf("%lld %lld",&n,&k);
    for(i=1;i<=k;i++){
        long long int lastDigit = n%10;
        if(lastDigit==0){
            n/=10;
        }else{
            n--;
        }
    }
    printf("%lld\n",n);
    return 0;
}
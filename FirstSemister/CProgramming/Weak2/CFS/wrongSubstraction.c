#include<stdio.h>
int main(){
    int i,n,k,lastDigit;
    scanf("%d%d",&n,&k);
    for(i=1;i<=k;i++){
        lastDigit = n%10;
        if(lastDigit !=0)
            n--;
        else
            n/=10;
    }
    printf("%d\n",n);
    return 0;
}
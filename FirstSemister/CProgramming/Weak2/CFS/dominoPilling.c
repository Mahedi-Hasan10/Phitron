#include<stdio.h>
int main(){
    int m,n,multiply,ans;
    scanf("%d%d",&m,&n);
    multiply = m*n;
    if(multiply%2==0)
        ans = multiply / 2;
    else
        ans = (multiply-1)/2;

    printf("%d\n",ans);
    return 0;
}
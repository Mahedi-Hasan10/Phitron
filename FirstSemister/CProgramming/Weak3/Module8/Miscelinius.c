#include<stdio.h>
int main(){
    int i,n,x,ara[2000001];
    scanf("%d",&n);
    for(i=1;i<n;i++){
        scanf("%d",&x);
        ara[x] = 1;
    }
    for(i=1;i<=n;i++){
        if(ara[i]==0){
            printf("%d ",i);
            break;
        }
    }
    return 0;
}
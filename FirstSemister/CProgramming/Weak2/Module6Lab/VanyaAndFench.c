#include<stdio.h>
int main(){
    int i,n,h,x,w=0;
    scanf("%d%d",&n,&h);
    for(i=1;i<=n;i++){
        scanf("%d",&x);
        if(x>h)
            w+=2;
        else
            w++;
    }
    printf("%d\n",w);
    return 0;
}
#include<stdio.h>
int main(){
    int oc=0,ec=0,ans;
    int ara[105];
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&ara[i]);
    }
    for(i=1;i<=n;i++){
        if(ara[i]%2==0)
            ec++;
        else
            oc++;
    }
    
    if(ec==1)
        for(i=1;i<=n;i++){
            if(ara[i]%2==0)
                ans = i;
        }
    else
        for(i=1;i<=n;i++){
            if(ara[i]%2==1)
                ans = i;
        }
    printf("%d\n",ans);
    return 0;
}
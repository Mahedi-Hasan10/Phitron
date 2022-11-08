#include<stdio.h>
int main(){
    int i,n,k;
    scanf("%d %d",&n,&k);
    int score[55];
    for(i=1;i<=n;i++){
        scanf("%d",&score[i]);
    }
    int ans = 0;
    for(i=1;i<=n;i++){
        if(score[i]>=score[k] && score[i]>0)
            ans++;
    }
    printf("%d\n",ans);
    return 0;
}
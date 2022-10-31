#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int p,v,t;
        scanf("%d %d %d",&p,&v,&t);
        if(p==v==t==1 || p==v==1 || p==t==1 || v==t==1){
            printf("1");
        }else{
            printf("0");
        }
    }
    
    return 0;
}
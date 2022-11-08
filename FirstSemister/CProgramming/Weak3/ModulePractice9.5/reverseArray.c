#include<stdio.h>
int main(){
    int i,j,n,lastIndex=0,firstIndex = 0;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++)
    {
        firstIndex = ara[0];
        scanf("%d",&ara[i]);
        lastIndex = ara[i];

    }
    int reverce[n];
    for(j=lastIndex;j>=firstIndex;j--){
        reverce[j]=ara[i];
        printf("%d",reverce[j]);
    }
    return 0;

}
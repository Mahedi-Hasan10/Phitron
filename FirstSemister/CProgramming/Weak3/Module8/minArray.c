#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    int min = ara[0];
    for(i=0;i<n;i++){
        if(ara[i]<min)
            min = ara[i];
    }
    printf("Minimum value is %d\n",min);
    return 0;
}
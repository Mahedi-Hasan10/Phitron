//Total weight of total passengers of a bus

#include<stdio.h>
int main(){
    int i,n,w,sum=0;
    printf("Enter total number of passengers : ");
    scanf("%d",&n);
    //Using for loop======>>>>
    // for(i=1;i<=n;i++){
    //     scanf("%d",&w);
    //     sum+=w;
    // }

    //Using While loop=====>>>>>>>
    i = 1;
    while(i<=n){
        scanf("%d",&w);
        sum+=w;
        i++;
    }
    printf("Sum of total weight : %d\n",sum);
    return 0;
}
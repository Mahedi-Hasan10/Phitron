#include<stdio.h>
int main(){
    int w;
    printf("Enter the weight of the Melon : ");
    scanf("%d",&w);
    if(w%4==0){
        printf("Possible to divide\n");
    }else{
        printf("Impossible to divide\n");
    }
    return 0;
}
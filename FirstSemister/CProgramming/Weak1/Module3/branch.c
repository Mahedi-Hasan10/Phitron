#include<stdio.h>
int main(){
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    if(x%2==0){
        printf("This is an even number\n");
    }else{
        printf("This is an odd number\n");
    }
    return 0;
}
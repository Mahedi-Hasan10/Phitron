#include<stdio.h>
int main(){
    int x,y;
    printf("Enter two numbers : ");
    scanf("%d %d",&x,&y);
    if(x>y){
        printf("X is largest");
    }
    else if(y>x){
        printf("Y is large");
    }
    else{
        printf("Both of them are equal");
    }

    return 0;
}
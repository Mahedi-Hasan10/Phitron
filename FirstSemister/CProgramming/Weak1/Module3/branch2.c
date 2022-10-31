#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three number : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("Largest number is a\n");
    }else if(b>c && b>a){
        printf("Largest number is b\n");
    }else{
        printf("Largest number is c\n");
    }

    return 0;
}
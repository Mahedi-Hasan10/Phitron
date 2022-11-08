#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=2;i++){
        for(j=1;j<=i;j++){
            printf("#");
        }
        printf("\n");
    }
    for(i=1;i<=n-3;i++){
        printf("#");
        for(j=1;j<=i;j++){
            printf(" ");
        }
        printf("#\n");
    }
    for(j=1;j<=n;j++){
        printf("#");
    }
    printf("\n");

    return 0;
}
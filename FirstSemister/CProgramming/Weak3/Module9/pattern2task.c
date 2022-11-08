/*
     *
    ***
   *****
  *******
  continue..
*/
#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(int k = n;k>=1;k--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf(" # ");
        }for(int k = n;k>=1;k--){
            printf(" \n");
        }
        printf("\n");
    }
    return 0;
}
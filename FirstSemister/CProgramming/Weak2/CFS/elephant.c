#include<stdio.h>
int main(){
    int x,s=0;
    scanf("%d",&x);
        s = (x/5) + (x%5!=0); 
    printf("%d\n",s);
    return 0;
}
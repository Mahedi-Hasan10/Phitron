#include<stdio.h>
int main(){
    int ara[] = {20,30,100,60,40};
    int max  = ara[0];
    int i;
    for(i=0;i<5;i++){
        if(ara[i] > max)
            max = ara[i];
    }
    printf("Maximum value in this array is %d\n",max);
    return 0;
}
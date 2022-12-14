#include<stdio.h>
int input_int()
{
    int x;
    scanf("%d",&x);
    return x;
}

int main(void){
    int n = input_int();
    int y = input_int();
    printf("%d %d\n",n,y);
}
/*
Write a C program to take one positive integer N as input and print all even numbers from 1 to N.

Sample Input: Sample Output:
10            2 4 6 8 10
7             2 4 6
*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    //Way no 1
    // for(int i = 1;i<=n;i++){
    //     if(i%2==0)
    //         printf("%d ",i);
    // }

    //way no 2
    for(int i = 2;i<=n;i+=2){
        printf("%d ",i);
    }
    return 0;
}
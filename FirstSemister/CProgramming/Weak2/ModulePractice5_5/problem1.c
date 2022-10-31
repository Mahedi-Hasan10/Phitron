/*
Write a C program to take one positive integer N as input and print from 1 to N.

Sample Input: Sample Output:
5             1 2 3 4 5
1             1
*/
#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i = 1;i<=N;i++){
        printf("%d ",i);
    }
    return 0;
}
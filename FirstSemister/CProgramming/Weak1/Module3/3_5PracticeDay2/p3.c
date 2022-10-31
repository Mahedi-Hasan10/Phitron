/*
Write a C program to take one non-negative integer and check if it is even or odd.
Sample input                    Sample Output
5                                Odd
10                               Even
*/
#include<stdio.h>
int main(){
    int x;
    printf("Enter a non-negative number : ");
    scanf("%d",&x);
    if(x%2==0){
        printf("Even");
    }else{
        printf("Odd\n");
    }
     return 0;
}
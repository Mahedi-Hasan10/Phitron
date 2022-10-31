/*
1. Write a C program to accept two integers and check whether they are equal or not. Go to the editor
Test Data : 15 15
Expected Output :
Number1 and Number2 are equal
*/

#include<stdio.h>
int main(){
    int a,b;
    printf("Test Data : ");
    scanf("%d %d",&a,&b);
    if(a==b){
        printf("Number1 and Number2 are \n");
    }else{
        printf("Number1 and Number2 are not equal");
    }
    return 0;
}
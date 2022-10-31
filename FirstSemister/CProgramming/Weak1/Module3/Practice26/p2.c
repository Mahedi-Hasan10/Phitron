/*
2. Write a C program to check whether a given number is even or odd. Go to the editor
Test Data : 15
Expected Output :
15 is an odd integer
*/

#include<stdio.h>
int main(){
    int a;
    printf("Test Data : ");
    scanf("%d",&a);
    if(a%2==1){
        printf("%d is an odd number\n",a);
    }else{
        printf("%d is not an odd number\n",a);
    }
    return 0;
}
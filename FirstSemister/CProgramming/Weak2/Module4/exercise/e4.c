/*
4. Write a program in C to display the Square of the number upto given 
an integer.
Test Data :
Input number of terms : 5
Expected Output :
Number is : 1 and Square of the 1 is :1
Number is : 2 and Square of the 2 is :4
Number is : 3 and Square of the 3 is :9
Number is : 4 and Square of the 4 is :16
Number is : 5 and Square of the 5 is :25

Solve the problems using for and while loop
*/
#include<stdio.h>
int main(){
    int i,n;
    printf("Input number of terms : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Number is : %d and Square of the %d is : %d\n",i,i,i*i);
    }
    return 0;
}
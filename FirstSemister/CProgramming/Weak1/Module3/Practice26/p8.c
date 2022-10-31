/*
8. Write a C program to find the largest of three numbers. Go to the editor
Test Data : 12 25 52
Expected Output :
1st Number = 12,        2nd Number = 25,        3rd Number = 52
The 3rd Number is the greatest among three
*/
#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Test Data : ");
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("1st Number = %d,\t2nd Number = %d,\n3rd Number = %d,\n",num1,num2,num3);
    if(num1 > num2 && num1 > num2){
        printf("The 1st number is greatest among there\n");
    }else if(num2 > num1 && num2 > num3){
        printf("The 2nd number is greatest among there\n");
    }else{
        printf("The 3rd number is greatest among there\n");
    }

    return 0;
}
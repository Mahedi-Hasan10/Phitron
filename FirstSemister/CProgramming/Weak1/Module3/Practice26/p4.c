/*
4. Write a C program to find whether a given year is a leap year or not. Go to the editor
Test Data : 2016
Expected Output :
2016 is a leap year.
*/
#include<stdio.h>
int main(){
    int year;
    printf("Test Data : ");
    scanf("%d",&year);
    if(year%400==0 || year%4==0){
        printf("%d is leap year\n",year);
    }else if(year%100==0){
        printf("%d is not leap year\n",year);
    }else{
        printf("%d is not leap year\n",year);
    }
}
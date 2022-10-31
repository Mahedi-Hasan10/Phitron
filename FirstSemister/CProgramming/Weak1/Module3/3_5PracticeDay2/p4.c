/*
Write a C program to take one non-negative integer and print the grade
accroading to the input.The grade system is shown below.
0-32 F
33-39 D
40-49 C
50-59 B
60-69 A-
70-79 A
80-100 A+

Sample input                    Sample Output
65                               A-
79                               A
95                               A+
19                               F
*/
#include<stdio.h>
int main(){
    int m;
    printf("Enter your mark : ");
    scanf("%d",&m);
    printf("Your entered %d\n",m);
    if(m>=0 && m<=32){
        printf("F\n");
    }else if(m>=33 && m<=39){
        printf("D\n");
    }else if(m>=40 && m<=49){
        printf("C\n");
    }else if(m>=50 && m<=59){
        printf("B\n");
    }else if(m>=60 && m <=69){
        printf("A-\n");
    }
    else if(m>=70 && m<=79){
        printf("A\n");
    }else {
        if(m>=80 && m<=100){
        printf("A+\n");
        }
    }
    return 0;
}
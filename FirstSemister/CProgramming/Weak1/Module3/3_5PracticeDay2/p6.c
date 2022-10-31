/*
You have got X marks in your exam. As you are a good and regular student,if you teacher 
he/she can give you at most Y bonus marks. Now you need to tell if you takes bonus marks
will your number become 100?

Write a C program to take two non-negative numbers X and Y as input and print YES or NO.
Sample Input                        Sample Output
95 10                                   YES
80 5                                    NO
*/
#include<stdio.h>
int main(){
     int X,Y;
     printf("Enter your marks two marks (including bonus) : " );
     scanf("%d %d",&X,&Y);
     int total = X+Y;
     if(total >= 100){
          printf("YES\n");
     }else{
          printf("NO\n");
     }
     return 0;
}
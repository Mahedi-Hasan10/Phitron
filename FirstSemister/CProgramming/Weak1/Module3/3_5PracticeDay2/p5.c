/*
Write a c program to take three non-negative integers input and tell if it forms a 
valid triangle. A triangle is valid if sum of its two sides greater than the third side
Print YES or NO. All sides must be valid(greater than 0).
Sample input                    Sample Output
2 4 2                             NO
10 20 20                          YES
0 2 10                            NO
4 2 8                             NO
*/
#include<stdio.h>
int main(){
     int a,b,c;
     printf("Enter three sides of the triangle : ");
     scanf("%d %d %d",&a,&b,&c);
     printf("You entered : %d %d %d\n",a,b,c);
     if( (a+b)>c && (b+c)>a && (c+a)>b){
          printf("YES\n");
     }else{
          printf("NO\n");
     }
     return 0;
}
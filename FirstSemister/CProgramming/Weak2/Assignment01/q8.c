/*
8. Take two integers as input and print their LCM as the output. We know, LCM of two numbers is the least common multiple of two numbers. You can use the logic from Question no. 6 to solve this problem. 

Sample Input 1: 
12 18 
Sample Output 1: 
The LCM of 12 and 18 is 36. 
Explanation: 
Since 36 is the least number which is divisible by both 12 and 18 so 36 is the output. 


*/

#include<stdio.h>
int main(){
    int a,b,gcd,lcm;
        scanf("%d%d",&a,&b);
        for(int i = 1;i<=a && i<=b;i++){
            if(a%i==0 && b%i==0){
                gcd = i;
            }
            }
        lcm = (a*b)/gcd; //Euclidian formula
        printf("The LCM of %d and %d is %d.\n",a,b,lcm);
    return 0;
}
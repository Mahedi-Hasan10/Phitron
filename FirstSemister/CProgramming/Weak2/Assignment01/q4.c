/*
4. This time you need to find the sum of the digits of the input. So look at the sample input output. 

Sample Input: 
2346167 
Sample Output: 
29 

Explanation: Since, the sum of the digits is 2+3+4+6+1+6+7 = 29. So the output is 29. 

*/
#include<stdio.h>
int main(){
    long long int n,lastDigit,count=0;
    scanf("%lld",&n);
    while(n!=0){
        lastDigit = n%10;
        n/=10;
        count +=lastDigit;
    }
    printf("%lld\n",count);
    return 0;
}
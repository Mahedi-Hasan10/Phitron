
#include<stdio.h>
int main()
{
	long long int num;
	scanf("%lld",&num);
	long long int total = num * (num-1) / 2; // Combination nC2
	printf("%lld",total);
	return 0;
}
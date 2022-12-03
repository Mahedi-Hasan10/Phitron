#include <stdio.h>

int addThreeNums(int a, int b, int c);

int main()
{
   int a, b;
   scanf("%d %d", &a, &b);

   int sum = addThreeNums(a, b, 0);

   printf("%d ", sum);
   return 0;
}

int addThreeNums(int a, int b, int c)
{
	return a+b+c;
}
#include <stdio.h>

int factorial(int f1);
int two_factorial(int f1, int f2);

int main()
{
   int fct1;
   scanf("%d", &fct1);

   int a = factorial(fct1);
   printf("Factorial = %d\n", a);

   int fct2, fct3;
   scanf("%d %d", &fct2, &fct3);
   int b = two_factorial(fct2, fct3);
   printf("Factorial ratio = %d", b);

   return 0;
}

int factorial(int ft1)
{
   int i=1, x=1;
   for(i=1; i<=ft1; i++)
   {
      x *= i;
   }
   return x;
}

int two_factorial(int ft1, int ft2)
{
   int fst = factorial(ft1);
  int snd = factorial(ft2);
 
  int ratio = fst / snd;

   return ratio;
}
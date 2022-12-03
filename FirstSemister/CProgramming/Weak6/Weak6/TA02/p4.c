#include <stdio.h>

void kth_element(int n, int k);

int main()
{
   int N, K;
   scanf("%d %d", &N, &K);

   kth_element(N, K);
   return 0;
}

void kth_element(int n, int k)
{
   int i=1, index=0;
   int a[n];
   for(i=1; i<=n; i++)
   {
      if(i%2 == 0)
      {
         a[index] = i;
         printf("%d ", i);
         index++;
      }
   }

   for(i=1; i<=n; i++)
   {
      if(i%2 == 1)
      {
         a[index] = i;
         printf("%d ", i);
         index++;
      }
   }

   printf("\nThe %dth element in this sequence is %d.", k, a[k-1]);

}
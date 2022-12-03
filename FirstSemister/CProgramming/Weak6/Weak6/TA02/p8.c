#include <stdio.h>

void charShift(char s[100],int N);

int main()
{
   int N;
   char strr[100];

   scanf("%s", &strr);
   scanf("%d", &N);

   charShift(strr, N);

   return 0;
}

void charShift(char st[100],int N)
{
   int i=0;
   while(st[i]!= '\0')
   {
      if(st[i]>= 'a' && st[i]<= 'z')
      {
         int value = st[i] += N;
         if(value > 122)
         {
            int v = st[i] - 122;
            int c = 97 + v -1;
            printf("%c", c);
         }
         else
         {
            printf("%c", value);
         }
      }
      i++;
   }
}
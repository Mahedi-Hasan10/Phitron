#include<stdio.h>
int main(void)
{
   int N,M;
   scanf("%d %d",&N, &M);
   int arr[N][M];
   int arr2[N][M];
   int sum[N][M];
 
   for(int i=0;i<N;i++)
   {
       for(int j=0;j<N;j++)
       {
           scanf("%d",&arr[i][j]);
       }
   }
   for(int i=0;i<N;i++)
   {
       for(int j=0;j<N;j++)
       {
           scanf("%d",&arr2[i][j]);
       }
   }
 
   for(int i = 0;i<N;i++)
   {
       for(int j=0;j<N;j++)
       {
           sum[i][j] = arr[i][j]+arr2[i][j];
       }
   }
 
   printf("\n");
   for(int i = 0;i<N;i++)
   {
       for(int j=0;j<N;j++)
       {
           printf("%d ",sum[i][j]);
       }
       printf("\n");
   }
   return 0;
}
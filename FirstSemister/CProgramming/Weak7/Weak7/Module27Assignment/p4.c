#include<stdio.h>
int cs_even(int n);

int main(void)
{
   int t;
   scanf("%d",&t);
   int k;
   for(k=1;k<=t;k++)
   {
     int n;
     scanf("%d",&n);
     cs_even(n);
   }

    return 0;
}

int cs_even(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        int sum = i+(i+2)+(i+4)+(i+6);
        if(sum==n)
        {
            printf("%d %d %d %d\n",i,(i+2),(i+4),(i+6));
            break;
        }
    }
}
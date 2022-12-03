#include<stdio.h>
int main()
{
    int a,b,c,med,t;
    scanf("%d",&t);
   int i;
   for(i=0;i<t;i++)
   {
    scanf("%d %d %d",&a,&b,&c);
        if(a<b && a>c)
            med = a;
        else if(b > a && b < c)
            med = b;
        else
            med = c;     
    printf("%d\n",med);
   }
    return 0;
}
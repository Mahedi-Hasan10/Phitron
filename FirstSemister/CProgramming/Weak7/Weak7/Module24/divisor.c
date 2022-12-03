#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    float limit = sqrt(n);
    for(int i = 2;i<=limit;i++)
    {
        if(n%2==0)
            printf("%d ",i);
    }
}
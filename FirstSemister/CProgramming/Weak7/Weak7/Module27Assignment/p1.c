#include<stdio.h>
int main(void)
{
    int n;
    int sum = 0;
    int fg = 1;
    scanf("%d",&n);

    int i;
    for(i=1;i<=n;i++)
    {
        sum+=i*fg;
        if(i%3==0)
        {
            if(fg==1)
            {
                fg = -1;
            }
            else if(fg==-1){
                fg = 1;
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}
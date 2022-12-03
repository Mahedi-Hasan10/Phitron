#include<stdio.h>
#include<math.h>

int absolute(int x);
float f(int x, int y);

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    float ans;
    ans = f(x,y);
    printf("%f\n",ans);
    return 0;
}

float f(int x, int y)
{
    int temp = absolute(x-3) + ((y+4)*(y+4));
    return sqrt(temp);
 
}

int absolute(int x)
{
    if(x>=0)
        return x;
    else
        return (-1)*x;
}


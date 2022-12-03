#include<stdio.h>
int main()
{
    int a,b,ans;
    scanf("%d %d",&a,&b);
    char c;
    getchar();
    c = getchar();
    if(c=='+')
    {
        ans = a+b;
        printf("%d\n",ans);
    }
    else if(c=='-')
    {
        ans = a - b;
        printf("%d\n",ans);
    }
    else{
        printf("Invalid charecter\n");
    }

    return 0;
}
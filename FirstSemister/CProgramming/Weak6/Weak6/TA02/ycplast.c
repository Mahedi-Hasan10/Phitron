#include<stdio.h>
int main()
{
    int a,b,i,j;
    int s1[5];
    int s2[5];
    int sum1 = 0;
    int sum2 = 0;

    scanf("%d %d",&a,&b);
    if(a>b)
        printf("Argentina\n");
    else if(b>a)
        printf("Brazil\n");
    else
        {
            for(i=0;i<5;i++)
            {
                scanf("%d",&s1[i]);
                sum1+=s1[i];
            }
            for(j=0;j<5;j++)
            {
                scanf("%d",&s2[j]);
                sum2+=s2[j];
            }
            
            if(sum1 > sum2)
                printf("Argentina\n");
            else
                printf("Brazil\n");
            
        }
        
    return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
    // int ara[15],i;
    // ara[0] = 98;
    // ara[1] = 97;
    // printf("%c %c",ara[0],ara[1]);

    // char s = 'america';
    // printf("%c",s);


    // char a[10];
	// 	char ch = 'a';
	// 	for(int i = 0; i<8;i++)
	// 	{
	// 		a[i] = ch+8-i;
	// 		    printf("%d ",a[i]);
	// 	}
	// 	a[8] = '\0';

	// 		    printf("%d",'Z');
    
    // int n = 10;
    // int x = 5;
    // int index = 0;
    // int a[] = {12, 7, 3, 71, 2, 43, 38, 23, 45, 22};
    // int b[n];
    // for (int i=0; i<n; i++) {
    //     b[i]=a[i]+x;
    //     printf("%d ",b[i]);

    // } 
    // int ara[15];
    // int i,j;
    // ara[0] = 1;
    // printf("%d ",ara[0]);
    // for(i=1,j=0;i<15;i++,j++)
    // {
    //     ara[i] = ara[j]*2;
    //     printf("%d ",ara[i]);
    // }
    
    // int n,rem,sum=0;
    // scanf("%d",&n);
    // while(n !=0 ) 
    // {
    //     rem = n%10;
    //     sum+=rem;
    //     n=n/10;
    // }
    // printf("%d\n",sum);

    int ara[] = {12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};
    int i,j,temp;
    int n = 11;
    for(j=0;j<5;j++)
    {
        for(i=0;i<(n-1);i++)
        {
            if(ara[i] > ara[i+1])
            {
                temp = ara[i];
                ara[i] = ara[i+1];
                ara[i+1] = temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",ara[i]);
    }
    return 0;
}
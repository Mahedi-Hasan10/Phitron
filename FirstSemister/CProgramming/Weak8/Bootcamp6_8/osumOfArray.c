#include<stdio.h>
int input_int()
{
    int x;
    scanf("%d",&x);
    return x;
}
void input_arr(int a[], int sz)
{
    for(int i=0;i<sz;i++)
    {
        a[i]=input_int();
    }
}
void print_arr(int a[],int sz)
{
    for(int i = 0;i<sz;i++)
    {
        printf("%d ",a[i]);
    }
}

int sum_arr(int a[], int sz)
{
    int summ = 0;
    for(int i = 0;i<sz;i++)
    {
        summ+=a[i];
    }
    return summ;
}
int main(void){
    int n = input_int();
    int a[n];
    input_arr(a,n);
    printf("You entered : \n");
    print_arr(a,n);
    int sum = sum_arr(a,n);
    printf("\nSum is %d\n",sum);

    return 0;
}
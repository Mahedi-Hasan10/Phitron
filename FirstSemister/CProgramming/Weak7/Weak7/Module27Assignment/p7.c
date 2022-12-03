#include <stdio.h>

int swapp(int* arr);


int main(void){

    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 1; i <=n; i++)
        scanf("%d",&arr[i]);
    swapp(&arr);
    for (int i = 1; i <= n; i++)
       printf("%d ",arr[i]);
    
    return 0;
}
int swapp(int* arr)
{
    int t,a,b,temp=0;
    scanf("%d",&t);
    for (int j = 1; j <=t; j++){
        scanf("%d %d",&a,&b);
        temp = arr[a];
        arr[a] = arr[b];
        arr[b]= temp;
    }
}
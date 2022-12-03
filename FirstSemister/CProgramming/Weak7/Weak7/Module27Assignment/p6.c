#include<stdio.h>

int div3(int* arr,int n);
int div5(int* arr,int n);


int main(void)
{
    int arr[1005];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int d3,d5;
    d3 = div3(&arr,n);
    d5 = div5(&arr,n);

    if(d3==-1 && d5==-1)
        printf("-1\n");
    else if(d3>0 && d5==-1)
        printf("%d\n",d3);
    else if(d5>0 && d3==-1)
        printf("%d\n",d5);
    else if(d3>0 && d5>0)
        printf("%d\n",d3+d5);

    return 0;
}

int div3(int* arr,int n){
    int count3 =0;
    for (int i = 0; i < n; i++){
        if (arr[i]%3==0 && arr[i]>0){
            count3++;
            arr[i]=1;
        }
    }
    if (count3==0){
        return -1;
    }
    else{
       return count3; 
    }
}
int div5(int* arr,int n){
    int count5 =0;
    for (int i = 0; i < n; i++){
        if (arr[i]%5==0 && arr[i]>0){
            count5++;
            arr[i]=1;
        }
    }
     if (count5==0){
        return -1;
    }
    else{
       return count5; 
    }

}
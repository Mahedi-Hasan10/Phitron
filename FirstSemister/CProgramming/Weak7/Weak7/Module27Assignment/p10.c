#include <stdio.h>

int beautiful7(int* arr,int n);

int main(void){

    int n;
    scanf("%d",&n);
    int arr[n];

    for (int i = 0; i <n; i++){
        scanf("%d",&arr[i]);
    }

    int a = beautiful7(&arr,n);

    if (n%2!=0){
        n+=1;
    }
    
    if (a>=(n/2)){
        printf("Beautiful\n");
    }
    else{
        printf("Ugly\n");
    }
}

int beautiful7(int* arr,int n)
{
    int bti=0;
    for (int i = 0; i<n; i++){
        while(arr[i]!=0){
            int dig = arr[i]%10;
            if (dig==7){
                bti++;
                break;
            }
            arr[i]/=10;
        }
    }
    return bti;
}

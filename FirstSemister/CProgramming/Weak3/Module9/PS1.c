#include<stdio.h>
int main(){
    int n,i,j,totalSubject,x;
    float sum,avg;
    printf("Enter the value of total students : ");
    scanf("%d",&n);
    printf("Enter the value of total Subjets : ");
    scanf("%d",&totalSubject);

    for(i=1;i<=n;i++){
        sum=0;
        printf("Enter the %dth student matks : ",i);
        for(j=1;j<=totalSubject;j++){
            scanf("%d",&x);
            sum+=x;
        }
        avg = sum/totalSubject;
        printf("Average mark of %dth student is %f\n",i,avg);

    }
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    if(n%2==0)
    {
        if(n%3==0){
            n=n/3;
            printf("%d\n",n);
        }
    }
    else{
        printf("-1");
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    if((A==B && B==C) && A>0 && B>0 && C>0)
     {
        printf("Yes");
     }
    else
    {
        printf("No");
    }


    return 0;
}
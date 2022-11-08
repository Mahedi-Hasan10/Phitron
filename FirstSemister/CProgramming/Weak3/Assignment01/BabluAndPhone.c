#include<stdio.h>
int main(){
    int T;
    scanf("%d", &T);
    int charge[T];
    for (int i = 0; i < T; i++)
    {
        scanf("%d%%\n", &charge[i]);
    }
    int X, Y, Z;
    for (int i = 0; i < T; i++)
    {
        if(charge[i] >= 0 && charge[i] < 60){
            X = 60 - charge[i];
            X = X + 40 + 60;
            printf("%d minutes\n", X);
        }
        if(charge[i] >= 60 && charge[i] < 80){
            Y = 80 - charge[i];
            Y = Y * 2 + 60;
            printf("%d minutes\n", Y);
        }
        if(charge[i] >= 80 && charge[i] <= 100){
            Z = 100 - charge[i];
            Z = Z * 3;
            printf("%d minutes\n", Z);
        }
    }

    return 0;
}
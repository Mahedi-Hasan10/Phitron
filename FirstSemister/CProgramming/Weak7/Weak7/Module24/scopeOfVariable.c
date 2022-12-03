#include<stdio.h>
int glob = 7;
void globall()
{
    printf("Printing in globall function %d\n",glob);
    int glob = 8;
    printf("Printing in gglob %d\n",glob);
    {
        extern int glob;
        printf("Printing in add global %d\n",glob);
    }
}
int main()
{
    globall();
    printf("Printing in main function %d\n",glob);
    return 0;
}
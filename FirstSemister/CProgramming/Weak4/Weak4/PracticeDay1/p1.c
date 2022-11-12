#include<stdio.h>
#include<string.h>

int main()
{
    int k,i;
    printf("Enter the size of the string array : ");
    scanf("%d",&k);
    char str[k+1];
    for(i=0;i<k;i++)
    {
        scanf("%d",&str[i]);
    }

    int n = strlen(str),largestElement = 26;

    int freq[largestElement+1];
    for(i=0;i<largestElement;i++)
    {
        freq[i] = 0;
    }

    for(i=0;i<=n;i++)
    {
        freq[(str[i]-'a')+1]++;
    }
    int total;
    for(i=0;i<=26;i++)
    {
        if(freq[i] >= 1)
        {
            total++;
        }
    }
    printf("%d",total);

    return 0;
}

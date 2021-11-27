#include <stdio.h>
int main()
{
    int ar_count,i,sum = 0;
    scanf("%d",&ar_count);
    int ar[ar_count];
    for(i=0;i<ar_count;i++)
    {
        scanf("%d",&ar[i]);
        sum = sum + ar[i];
    }
    printf("%d",sum);
}

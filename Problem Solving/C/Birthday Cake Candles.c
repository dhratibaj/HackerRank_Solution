#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],res=0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int max=a[0];
    for(i=0;i<n;i++)
        if(a[i]>max)
        max=a[i];
    for(i=0;i<n;i++)
        if(max==a[i])
        res++;
    printf("%d",res);
}

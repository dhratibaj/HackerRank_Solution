#include<stdio.h>
int main()
{
    int n,i,j,s1=0,s2=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            s1=s1+a[i][i];
        }
        s2=s2+a[i][n-i-1];
    }
    if(s2>s1)
    printf("%d",s2-s1);
    else 
    printf("%d",s1-s2);
}

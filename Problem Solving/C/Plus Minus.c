#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    float p=0,z=0,ne=0;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        p++;
        else if(a[i]==0)
            z++;
            else
            ne++;
    }
    printf("%f\n%f\n%f",p/n,ne/n,z/n);
}

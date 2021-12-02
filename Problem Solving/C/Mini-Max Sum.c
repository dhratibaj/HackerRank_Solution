#include<stdio.h>
int main()
{
    long int a[5];
    scanf("%ld%ld%ld%ld%ld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    long int min=a[0],max=a[0],s1=0,s2=0;
    int mi=0,ma=0,i;
    for(i=0;i<5;i++)
    {
        if(a[i]<min)
        {min=a[i];mi=i;}
        if(a[i]>max)
        {max=a[i];ma=i;}
    }
    for(i=0;i<5;i++)
    {
        if(i!=mi)
        s1=s1+a[i];
        if(i!=ma)
        s2=s2+a[i];
    }
    printf("%ld %ld",s2,s1);
}

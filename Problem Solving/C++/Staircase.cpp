#include <bits/stdc++.h>
int main()
{
    int n,i,j;
    std::cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=n-1-i;j>0;j--)
        std::cout<<" ";
        for(j=0;j<=i;j++)
        std::cout<<"#";
        std::cout<<"\n";
    }
}

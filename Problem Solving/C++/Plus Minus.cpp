#include <bits/stdc++.h>
int main()
{ 
    int n;
    std::cin>>n;
    int a[n],i;
    float p=0,z=0,ne=0;
    for(i=0;i<n;i++)
    std::cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        p++;
        else if(a[i]==0)
            z++;
            else
            ne++;
    }
    std::cout<<p/n<<"\n"<<ne/n<<"\n"<<z/n;
}

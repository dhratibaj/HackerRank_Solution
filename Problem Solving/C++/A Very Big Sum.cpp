#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    long long int sum=0,a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<sum;
}

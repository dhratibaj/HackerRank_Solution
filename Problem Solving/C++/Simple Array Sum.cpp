#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ar_count,i,sum=0;
    cin>>ar_count;
    int ar[ar_count];
    for(i=0;i<ar_count;i++)
    {
        cin>>ar[i];
        sum=sum+ar[i];
    }
    cout<<sum;
}

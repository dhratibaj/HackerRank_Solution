#include <bits/stdc++.h>
int main()
{
    int n;
    std::cin>>n;
    if (n % 2 != 0)
    std::cout<<"Weird";
    else {
        if(n<=20 && n>=6)
        std::cout<<"Weird";
        else 
        std::cout<<"Not Weird";
    }
    return 0;
}

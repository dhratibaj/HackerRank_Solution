#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int x;
    double y;
    string z;
    cin>>x>>y;
    getline(cin >> ws, z);
    cout<<i+x<<endl<<fixed<<setprecision(1)<<y+d<<endl<<s+z;
    return 0;
}

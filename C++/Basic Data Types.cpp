#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    int a1; long a2; char a3; float a4; double a5;
    cin>>a1>>a2>>a3>>a4>>a5;
    cout<<a1<<endl<<a2<<endl<<a3<<endl;
    cout<<fixed<<setprecision(3)<<a4<<endl;
    cout<<fixed<<setprecision(9)<<a5;
    return 0;
}

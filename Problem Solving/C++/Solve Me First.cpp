#include <iostream>
int main() {
  int num1, num2;
  std::cin>>num1>>num2;
  std::cout<<num1+num2;
  return 0;
}

#--------------------------------------with inbuild code--------------------

#include <iostream>
using namespace std;

int solveMeFirst(int a, int b) {
    return a+b;
}

int main() {
  int num1, num2;
  int sum;
  cin>>num1>>num2;
  sum = solveMeFirst(num1,num2);
  cout<<sum;
  return 0;
}

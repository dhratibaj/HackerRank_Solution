#include <stdio.h>
int main()
{
	int a,b;
    float x,y;
    scanf("%d%d\n%f%f\n",&a,&b,&x,&y);
    printf("%d %d\n%0.1f %0.1f",a+b,a-b,x+y,x-y);
    return 0;
}

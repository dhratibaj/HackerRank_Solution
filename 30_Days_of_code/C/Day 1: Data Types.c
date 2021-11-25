#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int x;
    double y;
    char z[100];
    scanf("%d %lf %[^\n]",&x,&y,&z);
    printf("%d\n%.1lf\n%s%s",i+x,d+y,s,z);
    return 0;
}

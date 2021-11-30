#include <stdio.h>
int main() 
{
    char c,s[100],sen[100];
    scanf("%c %s %[^\n]%*c", &c, s, sen);
    printf("%c\n%s\n%s\n", c, s, sen);
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct node 
{
    long value;
    int location;
};
int comp(const void *a, const void *b) 
{
    struct node *x = (struct node *) a;
    struct node *y = (struct node *) b;
    if (x->value < y->value)
        return -1;
    else if (x->value > y->value)
        return 1;
    return 0;
}
int main(int argc, const char * argv[]) 
{
    int n;
    scanf("%d", &n);
    struct node *a = (struct node *)malloc(n * sizeof(struct node));
    for(int i = 0; i < n; i++) 
    {
        scanf("%ld", &(a[i].value));
        a[i].location = i + 1;
    }
    qsort(a, n, sizeof(struct node), comp);
    long best = __LONG_MAX__;
    for(int i = 1; i < n; i++) 
    {
        if(a[i].value - a[i - 1].value < best && a[i].location < a[i - 1].location)
            best = a[i].value - a[i - 1].value;
    }
    printf("%ld", best); 
    return 0;
}

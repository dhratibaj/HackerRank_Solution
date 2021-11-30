#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>9)
    printf("Greater than 9");
    else
    {
        if(n==1)
        printf("one");
        else if(n==2)
        printf("two");
        else if(n==3)
        printf("three");
        else if(n==4)
        printf("four");
        else if(n==5)
        printf("five");
        else if(n==6)
        printf("six");
        else if(n==7)
        printf("seven");
        else if(n==8)
        printf("eight");
        else if(n==9)
        printf("nine");
    }
}

// Also using switch statement

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>9)
    printf("Greater than 9");
    else
    switch (n)
    {
        case 1: printf("one");
                break;
        case 2: printf("two");
                break;
        case 3: printf("three");
                break;
        case 4: printf("four");
                break;
        case 5: printf("five");
                break;
        case 6: printf("six");
                break;
        case 7: printf("seven");
                break;
        case 8: printf("eight");
                break;
        case 9: printf("nine");
                break;
    }
}

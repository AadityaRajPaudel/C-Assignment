// greatest of three numbers
#include <stdio.h>

void if_great(int a, int b, int c)
{
    if (a > b && a > c)
    {
        printf("Greatest number is %d.", a);
    }
    else if (b > a && b > c)
    {
        printf("Greatest number is %d.", b);
    }
    else if (c > a && c > b)
    {
        printf("Greatest number is %d.", c);
    }
    else
    {
        printf("No greatest number.");
    }
}

int main()
{
    int a, b, c;
    printf("Enter 3 numbers:");
    scanf("%d %d %d", &a, &b, &c);
    if_great(a, b, c);
    return 0;
}
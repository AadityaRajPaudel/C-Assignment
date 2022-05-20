// odd even using ternary
#include <stdio.h>
void calc(int a)
{
    (a % 2 == 0) ? printf("Even") : printf("Odd");
}
int main()
{
    int a;
    printf("Enter any number:");
    scanf("%d", &a);
    calc(a);
    return 0;
}
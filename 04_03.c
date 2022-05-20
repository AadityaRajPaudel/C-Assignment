// print greatest among two numbers using ternary operators
#include <stdio.h>
void calc(int a, int b)
{
    (a > b) ? printf("%d is greater", a) : printf("%d is greater", b);
}
int main()
{
    int a, b;
    printf("Enter any two numbers:");
    scanf("%d%d", &a, &b);
    calc(a, b);
    return 0;
}
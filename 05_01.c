// calculation
#include <stdio.h>
void calc(int a, int b)
{
    int value1 = ++a + ++a;
    int value2 = a-- - --b;
    printf("Values are %d and %d", value1, value2);
}
int main()
{
    int a, b, value;
    printf("Enter the values of a and b:");
    scanf("%d %d", &a, &b);
    calc(a, b);
    return 0;
}
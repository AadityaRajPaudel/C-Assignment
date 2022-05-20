// find value of ab^2/c
#include <stdio.h>
#include <math.h>
float calc(float a, float b, float c)
{
    float value = (a * pow(b, 2)) / c;
    return value;
}
int main()
{
    float a, b, c, value;
    printf("Enter value of a, b, c\n");
    scanf("%f %f %f", &a, &b, &c);
    value = calc(a, b, c);
    printf("Value: %.2f", value);
    return 0;
}
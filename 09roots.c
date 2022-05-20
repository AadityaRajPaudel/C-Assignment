// roots of quadratic equation, 211603
#include <stdio.h>
#include <math.h>
void calculator(int a, int b, int c)
{
    float x1, x2, x3, p, q;
    p = pow(b, 2) - 4.0 * a * c;
    if (p > 0)
    {
        q = pow(p, (1 / 2.0));
        x1 = (-b + q) / (2.0 * a);
        x2 = (-b - q) / (2.0 * a);
    }
    else if (p == 0)
    {
        x1 = -b / (2.0 * a);
        x2 = -b / (2.0 * a);
    }
    else
    {
        x1 = -b / (2.0 * a);
        x2 = -p;
        float x3 = pow(x2, (1 / 2.0)) / (2.0 * a);
        printf("The roots are: %.2f + %.2fi and %.2f-%.2fi", x1, x3, x1, x3);
    }
    printf("Root one: %.2f , Root two: %.2f", x1, x2);
}
int main()
{
    int a, b, c;

    printf("Enter value of a, b and c:");
    scanf("%d %d %d", &a, &b, &c);
    calculator(a, b, c);
    return 0;
}
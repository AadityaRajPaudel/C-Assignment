// printing n terms of fibonacci series
#include <stdio.h>
int main()
{
    int n, a = 0, b = 1, c = 0;
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("Series is:");
    if (n == 1)
        printf("0");
    else if (n == 2)
        printf("0 1");
    else
    {
        printf("0 1 ");
        for (int i = 1; i <= (n - 2); i++)
        {
            c = a + b;
            a = b;
            b = c;
            printf("%d ", c);
        }
    }
    return 0;
}
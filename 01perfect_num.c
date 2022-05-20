// Aaditya Raj Paudel, SE Morning, 211603
// Check if a number is perfect or not

#include <stdio.h>
int main()
{
    int n, value = 0;
    printf("Enter the number to check if it is perfect or not: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            value += i;
        }
    }
    if (value == n)
    {
        printf("\n%d is a perfect number!", n);
    }
    else
    {
        printf("\n%d is not a perfect number", n);
    }
    return 0;
}
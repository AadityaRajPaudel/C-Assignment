// sum of n numbers for odd and even seperately, 211603
#include <stdio.h>
int main()
{
    int n, esum = 0, osum = 0;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)

    {
        if (n % i == 0)
        {
            esum += i;
        }
        else
        {
            osum += i;
        }
    }
    printf("\nEven number sum: %d", esum);
    printf("\nOdd number sum: %d", osum);
    return 0;
}
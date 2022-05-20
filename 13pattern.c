// printing pattern, 211603
#include <stdio.h>
void pattern()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("%d", i);
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
int main()
{
    pattern();
    return 0;
}
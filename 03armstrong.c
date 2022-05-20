// armstrong check, 211603
#include <stdio.h>
#include <math.h>
int main()
{
    int num, n1, n2, i, value = 0, rem;
    printf("Enter a number to check armstrong: ");
    scanf("%d", &num);
    n1 = num;
    n2 = num;
    // finding length of num and storing it in 'i'
    while (n1 != 0)
    {
        n1 = n1 / 10;
        i++;
    }
    // calculation of value
    for (int j = 1; j <= i; j++)
    {
        rem = n2 % 10;
        value += pow(rem, i);
        n2 = n2 / 10;
    }
    if (value == num)
    {
        printf("\n%d is an Armstrong number.", num);
    }
    else
    {
        printf("\n%d is not an Armstrong number.", num);
    }
    return 0;
}
// Reverse a number and check for palindrome, 211603
#include <stdio.h>
int main()
{
    int n, num, rev = 0, rem;
    printf("Enter any number: ");
    scanf("%d", &num);
    n = num;
    while (n != 0)
    {
        rem = n % 10;
        n = n / 10;
        rev = rev * 10 + rem;
    }
    printf("\nIts reverse is: %d.", rev);
    if (num == rev)
    {
        printf(" It is a palindrome");
    }
    else
        printf(" It is not a palindrome");
    return 0;
}
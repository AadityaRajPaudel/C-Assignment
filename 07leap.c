// leap year check, 211603

#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year that you want to check\n");
    scanf("%d", &year);
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("The year %d is a leap year", year);
    }
    else
    {
        printf("The year %d is not a leap year", year);
    }

    return 0;
}
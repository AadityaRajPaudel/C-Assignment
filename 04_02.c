// find number of years, months and days from given total number of days
#include <stdio.h>
void calc(int days)
{
    int years, months;
    years = days / 365;
    days = days - years * 365;
    months = days / 30;
    days = days - months * 30;
    printf("Years:%d, Months: %d, Days: %d", years, months, days);
}
int main()
{
    int days;
    printf("Enter total number of days:");
    scanf("%d", &days);
    calc(days);
    return 0;
}
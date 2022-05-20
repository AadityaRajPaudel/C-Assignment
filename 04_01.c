// find total number of days when month year and days are given
#include <stdio.h>
int calc_days(int year, int month, int day)
{
    int days = year * 365 + month * 30 + day;
    return days;
}
int main()
{
    int month, year, day, days;
    printf("Enter the number of years, months and days: ");
    scanf("%d %d %d", &year, &month, &day);
    days = calc_days(year, month, day);
    printf("Total number of days are: %d", days);
    return 0;
}
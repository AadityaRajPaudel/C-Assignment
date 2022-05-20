// find net salary of a person when 10% travel allowance, 12% comission, 13% tax
#include <stdio.h>
float salary_calc(float salary)
{
    float net_salary;
    net_salary = salary + 0.1 * salary + .12 * salary - .13 * salary;
    return net_salary;
}
int main()
{
    float salary, net_salary;
    printf("Enter your salary: ");
    scanf("%f", &salary);
    net_salary = salary_calc(salary);
    printf("Net salary is: %.2f", net_salary);
    return 0;
}
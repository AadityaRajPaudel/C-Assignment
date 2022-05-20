// calculation of simple interest
#include <stdio.h>

// void type function
void simple_i(float p, float t, float r)
{
    float interest;
    interest = (p * t * r) / 100.0;
    printf("The interest is: Rs.%.2f", interest);
}

int main()
{
    float p, t, r;
    printf("Enter the principle, time and rate: ");
    scanf("%f%f%f", &p, &t, &r);
    simple_i(p, t, r);
    return 0;
}
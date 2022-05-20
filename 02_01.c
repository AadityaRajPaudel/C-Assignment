// area of circle
#include <stdio.h>
#include <math.h>
#define pi 3.14

float area(float r)
{
    float areaaa = pi * pow(r, 2);
    return areaaa;
}
int main()
{
    float radius, areaaa;
    printf("Enter the radius:");
    scanf("%f", &radius);
    areaaa = area(radius);
    printf("\nArea is: %.2f", areaaa);
    return 0;
}
// volume of sphere
#include <stdio.h>
float vol(float r)
{
    float volume;
    volume = 4 / 3 * (3.14 * r * r * r);
    return volume;
}
int main()
{
    float volume, radius;
    printf("Enter the radius:\n");
    scanf("%f", &radius);
    volume = vol(radius);
    printf("The volume is: %.2f", volume);
    return 0;
}
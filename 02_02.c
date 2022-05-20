// celcius to fahrenheit
#include <stdio.h>
void converter(float celcius)
{
    float fahrenheit;
    fahrenheit = (celcius * 1.8) + 32;
    printf("Temp in fahrenheit is: %.2f", fahrenheit);
}

int main()
{
    float celcius;
    printf("Enter temp in celcius:");
    scanf("%f", &celcius);
    converter(celcius);
    return 0;
}
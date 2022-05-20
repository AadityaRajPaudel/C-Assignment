/* ask person height in feet and inches and wt in kg, height into
inches......
*/
#include <stdio.h>
void calc(float ft, float in, float kg)
{
    float me, ratio;
    in = in + ft * 12.0;
    me = in * 0.0254;
    ratio = kg / (me * me);
    printf("Height in inch: %.2f, Height in metre: %.2f, Ratio: %.2f", in, me, ratio);
}
int main()
{
    float ft, in, kg;
    printf("Enter your height in ft and inches:");
    scanf("%f%f", &ft, &in);
    printf("Enter weight in kg:");
    scanf("%f", &kg);
    calc(ft, in, kg);
    return 0;
}
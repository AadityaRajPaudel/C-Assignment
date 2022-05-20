void convert1(float num)
{
    float a;
    printf("Enter  feet for conversion to inches : ");
    scanf("%f", &num);
    a = num * 12;
    printf("Inches : %.2f inches", a);
}

void convert2(float num)
{
    float b;
    printf("Enter Inches for Conversion to centimeter : ");
    scanf("%f", &num);
    b = num * 2.54;
    printf("Centimeter : %.2f cm", b);
}

void convert3(float num)
{
    float c;
    printf("Enter Centimeter for Conversion to meter : ");
    scanf("%f", &num);
    c = num * 0.01;
    printf("Meter : %.2f m", c);
}
int main()
{
    convert1(2); // taking 2 as parameter
    convert2(2);
    convert3(2);
    return 0;
}
// vote or not
#include <stdio.h>
void decesion(int age)
{
    if (age >= 18)
    {
        printf("You can vote!");
    }
    else if (age < 18 && age > 0)
    {
        printf("You can't vote!");
    }
    else
    {
        printf("Invalid data!");
    }
}
int main()
{
    int age, return_val;
    printf("Enter the age: ");
    scanf("%d", &age);
    decesion(age);

    return 0;
}
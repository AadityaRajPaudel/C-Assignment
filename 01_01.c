// sum and product of two numbers

#include <stdio.h>

// function that calculates sum
int add(int a, int b)
{
    int sum = a + b;
    return sum;
}
// function that calculates product
int multiply(int a, int b)
{
    int product = a * b;
    return product;
}

int main()
{
    int a, b, sum, product;
    printf("Enter any two numbers:");
    scanf("%d %d", &a, &b);
    sum = add(a, b);
    product = multiply(a, b);
    printf("\nSum is: %d and Product is: %d", sum, product);
    return 0;
}

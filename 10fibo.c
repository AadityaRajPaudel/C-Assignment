// specific term of fibo series, 211603
#include <stdio.h>
void fibo(int num)
{
    int a = 0, b = 1, c;
    printf("Enter a number : ");
    scanf("%d", &num);
    for (int i = 1; i < num; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    printf("The Fibonacci term : %d", c);
}

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    fibo(num);
    return 0;
}
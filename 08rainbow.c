#include <stdio.h>
int color(char letter)
{

    switch (letter)
    {
    case 'R':
        printf("Red\n");
        break;
    case 'O':
        printf("Orange\n");
        break;
    case 'Y':
        printf("Yellow\n");
        break;
    case 'B':
        printf("Blue\n");
        break;
    case 'I':
        printf("Indigo\n");
        break;
    case 'V':
        printf("Violet\n");
    default:
        printf("Green\n");
        break;
    }
}
int main()
{
    char letter;
    printf("Enter a first letter of rainbow color : ");
    scanf("%c", &letter);
    color(letter);
}
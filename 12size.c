// find size of various datatypes, 211603
void sizeOf()
{
    printf("Size of int : %zu bytes\n", sizeof(int));
    printf("Size of char : %zu bytes\n", sizeof(char));
    printf("Size of float : %zu bytes\n", sizeof(float));
    printf("Size of double : %zu bytes\n", sizeof(double));
    printf("Size of long double : %zu bytes\n", sizeof(long double));
    printf("Size of unsigned int : %zu bytes\n", sizeof(unsigned int));
}
int main()
{
    sizeOf();
    return 0;
}
#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if (b > 0)
    {
        printf("Addition => %d\n", a + b);
        printf("Multiplication => %d\n", a * b);
        printf("Subtraction => %d\n", a - b);
    }
    else
    {
        printf("Error hai bhai : Second number must be greater than zero.\n");
    }

    return 0;
}
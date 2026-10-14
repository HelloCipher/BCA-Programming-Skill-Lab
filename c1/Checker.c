#include <stdio.h>

int main()
{
    int a, b;

        printf("Enter first number: ");
            scanf("%d", &a);

                printf("Enter second number: ");
                    scanf("%d", &b);

                        if (a > 0 && b > 0)
                            {
                                    printf("Both numbers are positive.\n");

                                            printf("Addition = %d\n", a + b);
                                                    printf("Multiplication = %d\n", a * b);
                                                            printf("Subtraction = %d\n", a - b);
                                                                }
                                                                    else
                                                                        {
                                                                                printf("ERROR HAI :-Both numbers must be positive.");
                                                                                    }

                                                                                        return 0;
                                                                                        }
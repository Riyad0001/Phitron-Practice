#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int stars = 6; // Initial number of stars

    // Loop to print the triangle
    for (int i = 1; i <= N; i++)
    {
        // Loop to print spaces
        for (int j = 1; j <= N - i; j++)
        {
            printf(" ");
        }

        // Loop to print stars
        for (int k = 1; k <= stars; k++)
        {
            printf("*");
        }

        // Increase stars for the next line
        stars += 2;

        // Move to the next line
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

// Pattern 5

//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
int main()
{
    int n;
    printf("Enter the number you want starline :");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        for (int j = n; j > i; j--)
        {
            printf(" ");
        }

        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }

        for (int k = 1; k <= i + 1; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
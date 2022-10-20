#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter the order of the matrix: ");
    scanf("%d", &n);
    int a[n][n];
    printf("\nEnter the elements of matrix A: ");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMatrix A:\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    for (int i = 1; i <= n; i++)
    {
        sum = sum + a[i][i];
    }
    printf("The sum of diagonal elements of A is %d\n", sum);
    return 0;
}
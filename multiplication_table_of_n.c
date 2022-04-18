#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter any number:");
    scanf("%d", &n);
    printf("*** Multipication Table***\n");
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= 10; j++)
        {

            printf("%d x %d\t = %d\t", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}
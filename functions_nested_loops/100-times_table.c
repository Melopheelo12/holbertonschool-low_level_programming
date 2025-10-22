#include <stdio.h>

void print_times_table(int n)
{
    int i, j, res;

    if (n < 0 || n > 15)
        return;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            res = i * j;
            if (j == 0)
                printf("%d", res);
            else
                printf(", %3d", res);
        }
        printf("\n");
    }
}


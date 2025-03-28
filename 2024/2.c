#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int hanglieshi(int a[100][100], int n)
{
    if (n == 1)
        return a[0][0];
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        int b[100][100];
        //把a复制到b里
        for (int j = 0; j < n-1; j++)
        {
            for (int k = 0; k < n-1; k++)
            {
                if (k < i)
                {
                    b[j][k] = a[j + 1][k];
                }
                else
                {
                    b[j][k] = a[j + 1][k + 1];
                }
            }
        }
        if (i % 2 == 0)
        {
            result += a[0][i]*hanglieshi(b, n - 1);
        }
        else
        {
            result -= a[0][i]*hanglieshi(b, n - 1);
        }
    }
    return result;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int result = hanglieshi(a, n);
    printf("%d\n", result);

    system("pause");
    return 0;
}
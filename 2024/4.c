#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

long long sum_len;

long long thirty_six(long long x)
{ // 36的x次方
    long long result = 1;
    while (x > 0)
    {
        result = result * 36;
        x--;
    }
    return result;
}

long long Yuan_to_ten(char *x, long long x_len)
{
    //元宇宙整数变十进制整数
    long long sum = 0;
    for (long long i = x_len - 1; i >= 0; i--)
    {
        if (x[i] >= 'A')
        {
            sum += thirty_six(x_len - i - 1) * (x[i] - 'A' + 10);
        }
        else
        {
            sum += thirty_six(x_len - i - 1) * (x[i] - '0');
        }
    }
    return sum;
}
char *ten_to_yuan(long long x)
{
    char *a = malloc(sizeof(char) * 11);
    long long i = 0;
    while (x != 0)
    {
        if (x % 36 < 10)
        {
            a[i++] = x % 36 + '0';
        }
        else
        {
            a[i++] = x % 36 - 10 + 'A';
        }
        x = x / 36;
    }
    sum_len = i;
    return a;
}

int main()
{
    char *a = malloc(sizeof(char) * 10);
    scanf("%s", a);
    long long a_len = strlen(a);
    char *b = malloc(sizeof(char) * 10);
    scanf("%s", b);
    long long b_len = strlen(b);
    //以上是输入
    long long a_ten = Yuan_to_ten(a, a_len);
    long long b_ten = Yuan_to_ten(b, b_len);
    long long sum = a_ten + b_ten;
    //再把sum变成36进制就行了
    char *x = malloc(sizeof(char) * 11);
    x = ten_to_yuan(sum);
    for (long long i = sum_len - 1; i >= 0; i--)
    {
        printf("%c", x[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}

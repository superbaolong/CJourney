#include <stdio.h>
#include <stdlib.h>

double max_(double a, double b, double c)
{
    double d;
    if (a > b)
    {
        d = a;
    }
    else
    {
        d = b;
    }
    return (d > c) ? d : c;
}
double min_(double a, double b, double c)
{
    double d;
    if (a < b)
    {
        d = a;
    }
    else
    {
        d = b;
    }
    return (d < c) ? d : c;
}

int main()
{
    // H是色调，S饱和度，V明度
    double r, g, b;
    scanf("%lf %lf %lf", &r, &g, &b);
    double max = max_(r, g, b);
    double min = min_(r, g, b);
    double v = max;
    v = v * 100/255;
    double s;
    if (v == 0)
        s = 0;
    else
        s = (max - min) / max*100;
    double h;
    if (max == r)
    {
        h = (g - b) / (max - min);
    }
    else if (max == g)
    {
        h = (b - r) / (max - min) + 2;
    }
    else
    {
        h = (r - g) / (max - min) + 4;
    }
    h = h * 60;
    if (h < 0)
        h += 360;
    printf("%.4lf,%.4lf%%,%.4lf%%\n", h, s, v);

    system("pause");
    return 0;
}

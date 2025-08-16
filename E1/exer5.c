#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool is_leap_year(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
double myround(double x)
{
    if (x >= 0)
    {
        return floor(x + 0.5);
    }
    else
    {
        return ceil(x - 0.5);
    }
}
int gcd(int x, int y)
{
    if (x == 1 || y == 1)
    {
        return 1;
    }
    // 基准条件式什么?
    if (x >= y)
    {
        if (x % y == 0)
        {
            return y;
        }
        else
        {
            return gcd(x, x % y);
        }
    }
    else
    {
        if (y % x == 0)
        {
            return x;
        }
        else
        {
            return gcd(y, y % x);
        }
    }
}
int main(void)
{
    printf("-3.51的四舍五入:%.1f.\n", myround(-3.51)); // -4.0
    printf("4.49的四舍五入:%.1f.\n", myround(4.49));   // 4.0
    printf("%d\n", gcd(3, 9));
    return 0;
}
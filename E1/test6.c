#include <stdio.h>
int factorial(int a)
{
    // 循环版斐波那契数列
    int ans = 1;
    while (a > 0)
    {
        ans = ans * a;
        --a;
    }
    return ans;
}
int main()
{
    printf("5! = %d.\n", factorial(5)); // 120
    return 0;
}
#include <stdio.h>
#include <stdbool.h>
void exer4_1(void)
{
    int x = -1;
    if (x > 0)
        ; // 这句后是;
    printf("x is positive.\n");
}
int exer4_2_1(int x, bool y)
{
    int ans = 0;
    // 1.取个位 y = false
    if (!y)
    {
        ans = x % 10;
    }
    else
    {
        // 2.取十位
        ans = (x / 10) % 10;
    }
    return ans;
}
void exer4_2_2(int x)
{
    printf("个位是:%d.\n", exer4_2_1(x, 0));
    printf("十位是:%d.\n", exer4_2_1(x, 1));
}
int main(void)
{
    exer4_1();                         // x is positive.
    printf("%d\n", exer4_2_1(321, 0)); // 个位1
    printf("%d\n", exer4_2_1(321, 1)); // 十位2
    exer4_2_2(321);
    return 0;
}
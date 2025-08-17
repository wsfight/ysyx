#include <stdio.h>
#include <stdlib.h>
int genRandom(int upperBound)
{
    // 获取[10,20]之间的随机数
    int ans = rand() % 10 + 10;
    return ans;
}
int main()
{
    int a[4] = {1, 2, 3, 4};
    int b[4];
    for (int i = 0; i < 4; i++)
    {
        b[i] = a[i];
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%d.\n", b[i]);
    }
    printf("%d.\n", genRandom(10));
    printf("%d.\n", genRandom(10));
    printf("%d.\n", genRandom(10));
    printf("%d.\n", genRandom(10));
    return 0;
}
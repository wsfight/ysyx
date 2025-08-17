#include <stdio.h>
#include <stdlib.h>
/**
 * 1.字符串是只读的
 * 2.字符串做右值使用时自动转换成指向首元素的指针
 */
#define N 20
int arr[N];
void genRandom(int upperBound)
{
    int i;
    for (int i = 0; i < N; ++i)
    {
        arr[i] = rand() % upperBound;
    }
}
void printRandom(int a[])
{
    for (int i = 0; i < N; ++i)
    {
        printf("%d.\n", a[i]);
    }
}

int main(void)
{
    int count[4] = {1, 2, 3}; // 未赋值的元素,用0来初始化
    struct complex_struct
    {
        double x, y;
    } a[4]; // 4个连续的结构体数组
    struct
    { // 结构体中包含数组
        double x, y;
        int count[4];
    } s;
    for (int i = 0; i < 4; ++i)
    {
        printf("%d.\n", count[i]); // 1 2 3 0
    }
    // int b[4] = count;  // 数组类型做右值时,自动转换成指向数组首元素的指针
    int b[4];
    // b[0] = count; // 把count的首地址赋值给了b[0]
    for (int i = 0; i < 4; ++i)
    {
        printf("%d.\n", b[i]); // 1 2 3 0
    }
    genRandom(20);
    printRandom(arr);
    char c = "Hello.\n"[0]; //
    printf("%c\n", c);      // "H"

    return 0;
}
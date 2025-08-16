/**
 * 1.一个函数体内可以申明另外一个函数,但是不能定义一个函数.即不允许嵌套函数
 */
#include <stdio.h>
#include <math.h>
// 学习函数声明,先声明后使用
void newline(void);
void threeline(void);
void print_time(int hour, int min);
void foo(void);
void foo1(void);
void print_day(int day);

int main(void)
{
    printf("hello,world.\n");
    double pi = 3.1415;
    printf("sin(pi/2) = %f\n", sin(pi / 2));
    printf("begin\n");
    threeline();
    printf("end\n");
    print_time(23, 59);
    foo(); // 0?
    foo(); // 0?
    foo1();
    print_day(2);
    return 0;
}
void newline(void)
{
    // 例3.2最简单的自定义函数
    printf("\n");
}
void threeline(void)
{
    // 例3.3
    newline();
    newline();
    newline();
}
void print_time(int hour, int min)
{
    // 3.4
    printf("%d:%d\n", hour, min);
}
void foo(void)
{
    // 3.7
    int i;
    printf("%d\n", i);
    i = 77;
}
void foo1(void)
{
    int i = 0;
    {
        // 局部性原理
        int i = 1;
        int j = 2;
        printf("i = %d,j = %d.\n", i, j); // i = 1,j = 2
    }
    printf("i = %d\n", i);
}
void print_day(int day)
{
    switch (day)
    {
    case 1: // case后面必须更整形常亮表达式
        printf("monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    default:
        break;
    }
}
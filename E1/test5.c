/**
 *  1.新手学习增量式编程,一步一步看中间结果有没有错
 *  2.把小功能进行封装,封装就是为了复用和更好的调试.
 *  3.解决问题就是把大问题分解成小问题.
 *  4.递归一定就base case.
 *  5.自己调用自己就是递归函数
 */
#include <stdio.h>
#include <math.h>
double distance(double x1, double x2, double y1, double y2)
{
    double dx = y1 - x1;
    double dy = y2 - x2;
    // printf("dx = %.2f,dy = %.2f.\n", dx, dy);
    double dsqured = dx * dx + dy * dy;
    // printf("dsqured = %.2f.\n", dsqured);
    double ans = sqrt(dsqured);
    return ans;
}
void print_logarithm(double x)
{
    if (x <= 0.0)
    {
        printf("Positive number only!\n");
        return; // 这里输入输入错误会直接结束掉
    }
    else
    {
        printf("The log of x is %f.\n", log(x)); // 记住链接数学库 -lm
    }
}
int main()
{
    print_logarithm(-1);
    print_logarithm(2);
    printf("distance is %.2f.\n", distance(1.0, 2.0, 4.0, 6.0)); // 5
    return 0;
}
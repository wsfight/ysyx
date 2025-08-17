#include <stdio.h>
#include <math.h>
struct complex_struct
{
    double x, y;
};
enum coordinateType
{
    // 枚举类型
    RECTANGULAR, // 从0开始
    POLAR
};
struct complexStruct
{
    enum coordinateType t; // 一个标志
    double x, y;
};
struct complexStruct makeFromMagAng(double r, double A)
{
    // 构造极坐标系下的复数
    struct complexStruct z;
    z.t = POLAR;
    z.x = r * cos(A);
    z.y = r * sin(A);
    return z;
}
double real_part(struct complex_struct z)
{
    // 获得复数中的实部
    return z.x;
}
double img_part(struct complex_struct z)
{
    // 获得复数中的虚部
    return z.y;
}
double magnitude(struct complex_struct z)
{
    // 获取复数中的模
    return sqrt(z.x * z.x + z.y * z.y);
}
double angle(struct complex_struct z)
{
    // 获得角度
    return atan2(z.y, z.x);
}
struct complexStruct makeFromRealImg(double x, double y)
{
    // 构造极坐标系下的复数结构体
    struct complexStruct z;
    z.t = RECTANGULAR;
    z.x = x;
    z.y = y;
    return z;
}

void print_struct(struct complex_struct z)
{
    printf("x = %.2f,y = %.2f.\n", z.x, z.y);
}

int main(void)
{
    struct complex_struct z;
    struct complex_struct z1 = {1.0, 2.0};
    print_struct(z1);
    double x = 3.0;
    z.x = x;
    z.y = 4.0;
    int RECTANGULAR; // 枚举公用变量名空间.
    printf("%d %d\n", RECTANGULAR, POLAR);
    return 0;
}
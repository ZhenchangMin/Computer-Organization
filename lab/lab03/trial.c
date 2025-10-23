#include <stdio.h>
#include <limits.h>

int main() {
    // 1. short 型数据 -12345 的类型转换
    short s_num = -12345;
    int int_num = (int)s_num;
    unsigned short ushort_num = (unsigned short)s_num;
    unsigned int uint_num = (unsigned int)s_num;
    float float_num = (float)s_num;

    printf("int: %d (ten), 0x%x (hex)\n", int_num, int_num);
    printf("unsigned short: %u (ten), 0x%x (hex)\n", ushort_num, ushort_num);
    printf("unsigned int: %u (ten), 0x%x (hex)\n", uint_num, uint_num);
    printf("float: %f (ten)\n\n", float_num);

    // 2. int 型数据 2147483647 的类型转换
    int int_num2 = 2147483647;
    short s_num2 = (short)int_num2;
    unsigned short ushort_num2 = (unsigned short)int_num2;
    unsigned int uint_num2 = (unsigned int)int_num2;
    float float_num2 = (float)int_num2;

    printf("short: %d (ten), 0x%x (hex)\n", s_num2, s_num2);
    printf("unsigned short: %u (ten), 0x%x (hex)\n", ushort_num2, ushort_num2);
    printf("unsigned int: %u (ten), 0x%x (hex)\n", uint_num2, uint_num2);
    printf("float: %f (ten)\n\n", float_num2);

    // 3. float 型数据 123456.789e5 转换为 double
    float float_num3 = 123456.789e5;
    double double_num3 = (double)float_num3;

    printf("double: %lf (ten)\n\n", double_num3);

    // 4. double 型数据 123456.789e5 转换为 float
    double double_num4 = 123456.789e5;
    float float_num4 = (float)double_num4;

    printf("float: %f (ten)\n\n", float_num4);

    // 5. short 和 unsigned short 类型对 -12345 进行左移 2 位和右移 2 位操作
    short s_shift_left = s_num << 2;
    short s_shift_right = s_num >> 2;
    unsigned short us_shift_left = ushort_num << 2;
    unsigned short us_shift_right = ushort_num >> 2;

    printf("short left shift 2 bits: %d (ten), 0x%x (hex)\n", s_shift_left, s_shift_left);
    printf("short right shift 2 bits: %d (ten), 0x%x (hex)\n", s_shift_right, s_shift_right);
    printf("unsigned short left shift 2 bits: %u (ten), 0x%x (hex)\n", us_shift_left, us_shift_left);
    printf("unsigned short right shift 2 bits: %u (ten), 0x%x (hex)\n", us_shift_right, us_shift_right);

    return 0;
}
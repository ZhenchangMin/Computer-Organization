#include <stdio.h>
#include <limits.h>

int main() {
    // 1. unsigned int 型数据运算
    unsigned int u_num1 = 1;
    unsigned int u_num2 = 4294967295;
    unsigned int u_add = u_num1 + u_num2;
    unsigned int u_sub = u_num1 - u_num2;

    printf("1 + 4294967295 = %u (ten), 0x%x (hex)\n", u_add, u_add);
    printf("1 - 4294967295 = %u (ten), 0x%x (hex)\n\n", u_sub, u_sub);

    // 2. int 型数据运算
    int i_num1 = 2147483647;
    int i_num2 = -2147483648;
    int i_add = i_num1 + 1;
    int i_sub = i_num2 - 1;

    printf("2147483647 + 1 = %d (ten), 0x%x (hex)\n", i_add, i_add);
    printf("-2147483648 - 1 = %d (ten), 0x%x (hex)\n\n", i_sub, i_sub);

    // 3. float 型数据运算
    float f_num1 = 1.0f + 123456.789e30f;
    float f_num2 = -123456.789e30f;
    float f_res1 = f_num1 + f_num2;
    float f_res2 = 1.0f + (123456.789e30f + f_num2);

    printf("(1.0 + 123456.789e30) + (-123456.789e30) = %f (ten)\n", f_res1);
    printf("1.0 + (123456.789e30 + (-123456.789e30)) = %f (ten)\n", f_res2);

    return 0;
}
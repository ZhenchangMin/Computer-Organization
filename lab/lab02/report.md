# 实验报告
## 执行文件
```c
#include <stdio.h>
#include <math.h>
int floatPrecision()
{
    float a = 1.0f;
    float b = 1.0f;
    int count = 0;
    // 不断在a后面加小数位，直到a + b == a，此时b的精度无法被a表示
    while ((a + b) != a)
    {
        b /= 10.0f;
        count++;
    }
    return count;
}

int doublePrecision()
{
    double a = 1.0;
    double b = 1.0;
    int count = 0;
    while ((a + b) != a)
    {
        b /= 10.0;
        count++;
    }
    return count;
}
int main(){
    int floatPrec = floatPrecision();
    int doublePrec = doublePrecision();
    printf("float: %d\n", floatPrec);
    printf("double: %d\n", doublePrec);

    float divResult = -4.0f / 0.0f;
    printf("-4.0f / 0.0f is: ");
    if (isinf(divResult) && divResult < 0)
    {
        printf("-inf\n");
    }
    else
    {
        printf("%f\n", divResult);
    }

    double sqrtResult = sqrt(-9.0);
    printf("sqrt(-9.0) is: ");
    if (isnan(sqrtResult))
    {
        printf("nan\n");
    }
    else
    {
        printf("%f\n", sqrtResult);
    }
    return 0;
}
```
## 运行结果
```
float: 8
double: 16
-4.0f / 0.0f is: -inf
sqrt(-9.0) is: nan
```

## 回答问题
由此可见，单精度浮点数的精度为8位，双精度浮点数的精度为16位。
除数为0的时候，如果分子为正数，结果为正无穷（inf）；如果分子为负数，结果为负无穷（-inf）；如果分子也为 0，结果为非数（nan）。
如果对负数开方，在实数范围内，负数没有平方根，因此会返回非数（nan）。
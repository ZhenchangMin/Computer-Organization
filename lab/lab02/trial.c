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
int main()
{
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
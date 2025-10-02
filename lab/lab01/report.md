# 实验报告
```c
#include <stdio.h>
#include <stdbool.h>
int main(){
    printf("%d\n", 0==0U);
    printf("%d\n", -1 < 0);
    printf("%d\n", -1 < 0U);
    printf("%d\n", 2147483647 > -2147483647 - 1);
    printf("%d\n", 2147483647U > -2147483647 - 1);
    printf("%d\n", 2147483647 > (int)2147483648U);
    printf("%d\n", -1 > -2);
    printf("%d\n", (unsigned)-1 > -2);
    return 0;
}
```
输出结果：
```
1
1
0
1
0
1
1
1
```
通过实验，可以得出：
（1）我的机器字长为32位，int类型的位数为32位，最小值为-2147483648，最大值为2147483647。

（2）-1 用 int 类型和 unsigned int 类型表示的结果分别是 0xFFFFFFFF 和 4294967295。
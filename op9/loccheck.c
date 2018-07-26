/* 查看变量存储在哪里 */
#include<stdio.h>

void mikado(int);

int main(void)
{
    int pooh = 2, bah = 5;
    printf("程序 变量: %d, 地址 %p\n", pooh, &pooh);
    printf("程序 参数变量 %d, 地址: %p\n", bah, &bah);
    mikado(bah);
    return 0;
}

void mikado(int bah)
{
    int pooh = 10;
    printf("函数 变量: %d, 地址 %p\n", pooh, &pooh);
    printf("函数 参数变量 %d, 地址: %p\n", bah, &bah);
}

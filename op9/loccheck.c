/* 查看变量存储在哪里 */
#include<stdio.h>
#include<stdlib.h>

void mikado(int);

int main(void)
{
    system("chcp 65001");
    int pooh = 2, bah = 5;
    printf("程序 变量: %d, 地址 %p\n", pooh, &pooh);
    printf("程序 参数变量 %d, 地址: %p\n", bah, &bah);
    mikado(bah);
    getchar();
    return 0;
}

void mikado(int bah)
{
    int pooh = 10;
    printf("函数 变量: %d, 地址 %p\n", pooh, &pooh);
    printf("函数 参数变量 %d, 地址: %p\n", bah, &bah);
}

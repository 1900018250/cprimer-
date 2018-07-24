/*two_func.c -- 一个文件包含两个函数*/
#include<stdio.h>
void butler(void); // ANSI/ISO C函数原型
int main(void)
{
    printf("I will summon the bulter function.\n");
    butler();
    getchar();
    return 0;
}

void butler(void)
{
    printf("我是函数我在调用\n");
}


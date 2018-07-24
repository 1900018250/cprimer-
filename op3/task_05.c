/* 显示年龄对应的秒数 */
#include<stdio.h>

int main()
{
    int age;
    double second;
    printf("请输入你的年龄.\n");
    scanf("%d", &age);
    second = age * 3.156 * (10 ^ 7);
    printf("你的秒数是：%e\n", second);
    return 0;

}




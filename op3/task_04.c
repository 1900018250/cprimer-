/* 读取浮点数 先小数形式打印 再指数形式打印 再十六进制表示 */
#include<stdio.h>

int main()
{
    float num;
    printf("请输入一个浮点数：\n");
    scanf("%f", &num);
    printf("%f\n", num);
    printf("%5.2f\n", num);
    printf("%e\n", num);
    printf("%a\n", num);    // %a 十六进制计数
    return 0;
}

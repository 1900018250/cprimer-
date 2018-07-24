#include<stdio.h>

int main(void)
{
    float weight;   // 你的体重
    float value;    // 相等重量的白金价值
    printf("Are you worth your weight in platinum\n");
    printf("Let,s check it out.\n");
    printf("请输入你的体重哦\n");
    /* 获取用户的体重 */  
    scanf("%f", &weight);
    value = 1700.0 * weight * 14.5833;
    printf("You weight in platinum is worth $%.2f.\n", value);

    getchar();
    getchar();

    return 0;
}

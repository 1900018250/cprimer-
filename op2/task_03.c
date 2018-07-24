#include<stdio.h>

int main(void)
{
    int age;
    printf("请输入你的年龄");
    scanf("%d", &age);
    printf("你的年龄是: %d\n你的天数是: %d\n", age, age * 365);
    getchar();
}

#include<stdio.h>

int main()
{
    char full[20], name[20];
    printf("输入你的姓名：\n");
    scanf("%s %s", full, name);
    printf("%s,%s\n", name, full);
    return 0;
}

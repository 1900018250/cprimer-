/* 输入一个整数 打印比他大十的所有整数 */
#include<stdio.h>

int main(void)
{
    int i, j;
    printf("请输入一个整数.\n");
    scanf("%d", &i);
    j = i;
    while(j <= i + 10)
    {
        printf("%d\t", j);
        j++;
    }
    return 0;
}



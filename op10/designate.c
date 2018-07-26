/* 使用指定初始化器 */
#include <stdio.h>
#include <stdlib.h>
#define MONTHS 12

int main(int argc, char const *argv[])
{
    system("chcp 65001");
    int days[MONTHS] = {31, 28, 30, 31}; 
    int i;
    for (i = 0; i < MONTHS; i++)    
        printf("%2d %d\n", i + 1, days[i]);
    getchar();
    return 0;
}
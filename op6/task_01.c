/* 创建26个元素的数组 存储26小写字母 打印 */
#include<stdio.h>

int main(void)
{
    int ss[26];
    for(int i = 0; i <= 25; i++)
    {
        ss[i] = i + 97;
    }
    for(int j = 0; j <= 25; j++)
    {
        printf("%c ", ss[j]);
    }
    return 0;
}

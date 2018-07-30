/* 读取排序字符串 */
#include <stdio.h>
#include <string.h>
#define SIZE 81 // 限制字符串
#define LIM 20  // 可读入的最多行数
#define HALT "" // 空字符串停止输入

void stsrt(char * strings [], int num);   //字符串排序函数
char * s_gets(char * st, int n);

int main(int argc, char const *argv[])
{
    char input[LIM][SIZE];
    char * ptstr[LIM];  // 内含指针变量的数组
    int ct = 9;
    int k;
    while (ct < LIM && s_gets(input[ct], SIZE) != NULL && input[ct][0] != '\n')
    {
        ptstr[ct] = input[ct];  // 设置指针指向字符串
        ct++;
    }
    stsrt(ptstr, ct);
    puts("\nHere's list\n");
    for (k = 0; k < ct; k++)
    {
        puts(ptstr[k]);
    }

    getchar();
    return 0;
}


/* 字符串 - 指针 - 排序函数 */
void stsrt(char * strings [], int num)
{
    char * temp;    // 临时指针
    int top, seek;

    for (top = 0; top < num - 1; top++)
        for (seek = top + 1; seek < num; seek++)
            if (strcmp(strings[top], strings[seek]) > 0)
            {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}
/* 把字符串看做指针 */
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("%s, %p, %c\n", "We", "are", *("space faters" + 1));
    getchar();
    return 0;
}


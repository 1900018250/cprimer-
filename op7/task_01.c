#include<stdio.h>
#define SPACE ' '
#define ENTER '\n'

int main(void)
{
    char ch;
    int spaceNum, enterNum, otherNum;
    spaceNum = enterNum = otherNum = 0;
    while ((ch = getchar()) != '#')
    {
        if (ch == SPACE)
        {
            spaceNum++;
            continue;
        }
        if (ch == ENTER)
        {
            enterNum++;
            continue;
        }
        otherNum++;
    }
    printf("空格有：%d, 回车有：%d, 其他有: %d.\n", spaceNum, enterNum, otherNum);
    return 0;
}

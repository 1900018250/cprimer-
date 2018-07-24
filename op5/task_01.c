/* 把分钟转换成小时和分钟表示 */
#include<stdio.h>
#define TRANS 60
int main()
{
    int minute, hours, min_minute;
    while(1)
    {
        printf("请输入你想转变的分钟数: \n");
        scanf("%d", &minute);
        printf("%d\n", minute);
        if(minute <= 0)
            break;
        hours = minute / TRANS;
        min_minute = minute % TRANS;
        printf("%d小时: %d分钟.\n", hours, min_minute);
    }
    return 0;
}

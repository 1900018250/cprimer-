// 指针地址
#include <stdio.h>
#define SIZE 4

int main(int argc, char const *argv[])
{
    short dates[SIZE] = {1, 2, 3, 4};
    short * pti;
    short index;
    double bills[SIZE];
    double * ptf;

    pti = dates;    // 把数组地址赋值给指针
    ptf = bills;
    printf("%d\n", *pti);
    printf("%d\n", *(pti + 1));
    printf("%d\n", *(pti + 1));



    pti = dates;
    printf("%23s %15s \n", "short", "double");
    for (index = 0; index < SIZE; index++)
        printf("pointers + %d: %10p %10p\n", index, pti + index, ptf + index);
    getchar();
    return 0;
}

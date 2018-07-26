/* 数组下标越界 */
#include <stdio.h>
#define SIZE 4

int main(int argc, char const *argv[])
{
    int value1 = 4;
    int arr[SIZE];
    int value2 = 88;
    int i;
    printf("value1 = %d, value2 = %d\n", value1, value2);
    for (i = -1; i <= SIZE; i++)
        arr[i] = 2*i + 1;
    for (i = -1; i < 7; i++)
        printf("%2d %d\n", i, arr[i]);
    printf("value1 = %d, value2 = %d\n", value1, value2);
    getchar();
    return 0;
}

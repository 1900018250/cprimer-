/* 数组下标越界 */
#include <stdio.h>
#define SIZE 4

int main(int argc, char const *argv[])
{
    int value1 = 4;
    int arr[SIZE];
    int value2 = 88;
    int ayy[value1];
    int i;
    printf("value1: %p\n", &value1);
    printf("value2: %p\n", &value2);
    printf("value1 = %d, value2 = %d\n", value1, value2);
    for (i = -1; i <= SIZE; i++)
        arr[i] = 2*i + 1;
    for (i = -1; i < 7; i++)
        printf("%2d %d\n", i, arr[i]);
    printf("value1 = %d, value2 = %d\n", value1, value2);
    printf("arr[-1]: %p\n", &arr[-1]);
    printf("arr[4]: %p\n", &arr[4]);
    printf("value1: %p\n", &value1);
    printf("value2: %p\n", &value2);
    getchar();
    return 0;
}

/* 数组元素之和 */
#include <stdio.h>
#define SIZE 10

int sum(int ar[], int n);
int sump(int * start, int * end);

int main(int argc, char const *argv[])
{
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 20, 31, 20};
    long answer;
    // answer = sump(marbles, marbles + SIZE);
    answer = sump(&marbles[0], &marbles[SIZE - 1]);
    printf("total number is %ld.\n", answer);
    printf("marbles is %lu bytes.\n", sizeof marbles);
    printf("marbles is %lu bytes.\n", sizeof &marbles[0]);
    printf("this is ？ %s \n", marbles == &marbles[0] ? "haha" : "hehe");
    getchar();
    return 0;
}


int sum(int ar[], int n)
{
    int i;
    int total = 0;
    for (i = 0; i < n; i++)
        total += ar[i];
    // 这里的ar不是数组本身
    // 他是指向marbles 数组首元素的指针 windows用4个字节存
    // 所以main 中的 marbles 是一个数组
    // sum函数中是一个指向marbles数组首元素的指针
    // 利用c数组和指针关系 可以用用数组表示法来表示指针
    printf("The size of ar is %lu bytes.\n", sizeof ar);
    return total;
}

int sump(int * start, int * end)
{
    // 使用指针计算数组
    int total = 0;
    printf("%p %p\n", start, end);
    while (start <= end)
    {
        //total += *start;
        //start++;
        // * 和 ++ 的优先级相同， 结合律是从 右 到 左
        total += *start++;
    }
    return total;
}
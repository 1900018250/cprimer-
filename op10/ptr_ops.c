// 指针操作
#include <stdio.h>

int main(void)
{
    int urn[5] = {100, 200, 300, 400, 500};
    int * ptr1, * ptr2, * ptr3;
    ptr1 = urn; //把第一个地址赋值给指针
    ptr2 = &urn[2]; //把地址给指针
    // 解引用指针， 以及获取指针的地址
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", 
        ptr1, *ptr1, &ptr1);
    // 指针加法
    ptr3 = ptr1 + 4;
    printf("\nadding an int to a pointer\n");
    // 这里 指针的地址增加了16 
    // 相当于 增加了4个int(windows下)的值
    // 此时ptr4 指向第五个元素的地址 
    printf("ptr1 + 4 = %p, *(ptr + 4) = %d \n",
        ptr1 + 4, *(ptr1 + 4));
    // 递增指针
    ptr1++; // 这里ptr1指向的地址增加4 相当于urn[1]的地址 指针自己的地址不变
    printf("\nvalues after ptr++:\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n",
        ptr1, *ptr1, &ptr1);
    ptr2--; // 指针递减
    printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n",
        ptr2, *ptr2, &ptr2);
    --ptr1; ++ptr2; // 恢复初始值
    // 一个指针减去另一个指针
    printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %d\n",
        ptr2, ptr1, ptr2 - ptr1);
    // 一个指针减去一个整数
    printf("ptr3 = %p, ptr3 - 2 = %p\n",
        ptr3, ptr3 - 2);
    getchar();
    return 0;
}
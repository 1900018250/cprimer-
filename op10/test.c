#include<stdio.h>
#include "getMax.h"

int main(int argc, char const *argv[])
{
    double rates[5] = {1.1, 1.2, 1.3, 1.4, 1.5};
    int arr[] = {1, 2, 3, 7, 100, 2};
    printf("%d\n", getMax(arr, 6));
    printf("%d\n", getDiff(arr, 6));
    printf("%d\n", 0||100);
    sortArr(arr, 6);
    for (int i = 0; i < 6; i++)
        printf("%d ", arr[i]);
    printf("\n");
    const double * pd = rates;
    pd++;   // const 指针 pd可以指向别处
    printf("%f\n", *pd);
    printf("%d\n", (int[]){1, 2, 3}[0]);
    getchar();
    return 0;
}
#include<stdio.h>

int main(int argc, char const *argv[])
{
    double rates[5] = {1.1, 1.2, 1.3, 1.4, 1.5};
    const double * pd = rates;
    pd++;   // const 指针 pd可以指向别处
    printf("%f\n", *pd);
    printf("%d\n", (int[]){1, 2, 3}[0]);
    getchar();
    return 0;
}
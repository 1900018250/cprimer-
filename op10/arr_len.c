#include<stdio.h>

int main(int argc, char const *argv[])
{
    const int days[] = {1, 2, 3, 4, 5, 6, 7};
    printf("%d\n", sizeof days / sizeof days[0]);
    getchar();
    return 0;
}

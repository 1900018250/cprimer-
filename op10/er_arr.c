#include<stdio.h>

int main(void)
{
    const float rain[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    printf("%f\n", rain[2][2]);
    printf("%d\n", sizeof(rain) / sizeof(rain[0]));
    printf("%d\n", sizeof(rain[0]) / sizeof(rain[0][0]));
    for (int i = 0; i <= sizeof(rain) / sizeof(rain[0]) - 1; i++)
        for (int j = 0; j <= sizeof(rain[0]) / sizeof(rain[0][0]) - 1; j++)
            printf("%f\n", rain[i][j]);
    getchar();
    return 0;
}
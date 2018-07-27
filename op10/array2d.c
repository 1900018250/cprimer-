/* 处理二维数组的函数 */ 
#include <stdio.h>
#define ROWS 3
#define COLS 4

void sum_rows(int arr[][COLS], int rows);
void sum_cols(int [][COLS], int);
int sum2d(int (* arr)[COLS]);

int sum2d(int (* arr)[COLS])
{
    int sum = 0;
    printf("----%p %p---\n", arr, (arr + ROWS - 1));
    // printf("----%p----\n", ++arr);
    // printf("----%p----\n", ++arr);
    int (* end)[COLS] = arr + ROWS - 1;
    while(arr <= end)
    {
        int * arr_arr;
        arr_arr = *arr;
        int * arr_end = arr_arr + COLS -1;
        while(arr_arr <= arr_end)
        {
            sum += *arr_arr;
            printf("--%d\n", *arr_arr);
            arr_arr++;
        }
       // printf("%p\n", arr);
        arr++;
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    int junk[ROWS][COLS] = {
        {2, 4, 6, 8 },
        {3, 5, 7, 9 },
        {12, 10, 8, 6 }
    };
    sum_rows(junk, ROWS);
    printf("sum is %d\n", sum2d(junk));
    int (* pc)[COLS];
    pc = junk;
    printf("%d\n", **pc);
    pc++;
    printf("%d\n", **pc);
    printf("---%p\n", pc);
    printf("---%p\n", *pc);
    //(*pc)++;
    int *pa;
    pa = *pc;
    pa++;
    printf("%d\n", *pa);
    printf("---%p\n", pc);
    printf("---%p\n", *pc);
    printf("%d\n", **pc);
    getchar();
    return 0;
}


void sum_rows(int arr[][COLS], int rows)
{
    int r, c, tot;
    for (r = 0; r < rows; r++)
    {                                       
        tot = 0;
        for (c = 0; c < COLS; c++)
        {
            tot += arr[r][c];
        }
        printf("rows %d sum is %d\n", r, tot);
    }
}


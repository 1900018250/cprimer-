/* 三种方法copy数组 */
#include <stdio.h>

void copy_arr(double target[], double source[], int cols);
void copy_ptr(double * ta, double * so, int cols);
void copy_ptrs(double * ta, double * so, double * sos);
void printf_array(double array[], int cols);

int main(int argc, char const *argv[])
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];

    copy_arr(target1, source, 5);
    printf_array(target1, sizeof target1 / sizeof target1[0]);

    copy_ptr(target2, source, 5);
    printf_array(target2, sizeof target2/ sizeof target2[0]);
    
    copy_ptrs(&target3[0], &source[0], &source[4]);
    printf_array(target3, sizeof target3 / sizeof target3[0]);

    printf("%p, %p\n", source, &source);
    printf("%p, %p\n", &source[0], &source[4]);
    getchar();
    return 0;
}

void printf_array(double array[], int cols)
{
    for (int i = 0; i < cols; i++)
    {
        printf("%.2f ", array[i]);
    }
    printf("\n");
}

void copy_arr(double target[], double source[], int cols)
{
    for (int i = 0; i < cols; i++)
    {
        target[i] = source[i];
    }
}

void copy_ptr(double * ta, double * so, int cols)
{
    for(int i = 0; i < cols; i++)
    {
        *(ta + i) = * (so + i);
    }
}

void copy_ptrs(double * ta, double * so, double *sos)
{
    while(so <= sos)
    {
        printf("%p----%p\n", ta, so);
        printf("%.2f\n", *so);
        *ta++ = *so++;
    }
}

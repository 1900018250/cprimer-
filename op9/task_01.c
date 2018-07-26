#include<stdio.h>

double vsDouble(double * x, double * y);

int main(void)
{
    double x = 1.01, y = 2.01;
    printf("最小%f\n", vsDouble(&x, &y));
}

double vsDouble(double * x, double * y)
{
    return *x > *y ? *x : *y;
}

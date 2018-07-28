#include <stdio.h>
#define ROWS 3
#define COLS 5

void copy_arr(double s[][COLS], double t[][COLS], int rows);
void print(int rows, int cols, double s[rows][cols]); 

int main(int argc, char const *argv[])
{
    double source[ROWS][COLS]={
		{0.1, 0.2, 0.3, 0.4, 0.5},
		{1.1, 1.2, 1.3, 1.4, 1.5},
		{2.1, 2.2, 2.3, 3.4, 3.5},
	};

    double target[ROWS][COLS];
    copy_arr(source, target, ROWS);
    print(ROWS, COLS, target);
    getchar();
    return 0;
}

void copy_arr(double s[][COLS], double t[][COLS], int rows)
{
    double (*i)[COLS] = s;
    int j;
    for (i = s; i < s + rows; i++, t++)
    {
        for(j = 0; j < COLS; j++)
        {
            *(*t+j) = *(*i+j);
            printf("%.1f\n", *(*t+j));
        }
    }
}

void print(int rows, int cols, double s[rows][cols])
{
	for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%.1f ", s[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}	

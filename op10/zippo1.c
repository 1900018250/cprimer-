#include <stdio.h>

int main(int argc, char const *argv[])
{
    int zippo[4][2] = {
        {2, 4},
        {6, 8},
        {1, 3},
        {5, 7}
    };
    // zippo + 1 加了8个字节 两个int
    printf("zippo = %p, zippo + 1 = %p\n",
        zippo, zippo + 1);
    // zippo[0] + 1 加了4字节 一个int
    printf("zippo[0] = %p, zippo[0] + 1 = %p\n", 
        zippo[0], zippo[0] + 1);
    printf("zippo[0][0] = %d\n", zippo[0][0]);
    printf("*zippo[0]=%d, **zippo=%d\n", *zippo[0], **zippo);
    printf("zippo[2][1] = %d\n", zippo[2][1]);
    printf("*(*zippo + 2) + 1 = %d\n", *(*zippo + 1) + 1);
    getchar();
    return 0;
}

#include <stdio.h>

int main(void)
{
    int zippo[4][2] = {
       {2, 4},
       {6, 8},
       {1, 3},
       {5, 7}
    };
    int (* pz)[2];
    pz = zippo;
    printf("pz = %p, pz + 1 = %p\n", pz, pz + 1);
    printf("pz[0] = %p, pz[0] + 1 = %p\n", pz[0], pz[0] + 1);
    printf("%d  %d\n", **zippo, zippo[0][0]);
    getchar();
    return 0;
}
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    //char crr[n];
    char heart[] = "I love Tillie!";
    const char * head = "I love Millie!";
    for (int i = 0; i < 6; i++)
        putchar(heart[i]);
    putchar('\n');
    for (int j = 0; j < 6; j++)
        putchar(head[j]);
    putchar('\n');
    head = heart;
    char * p1 = "Klingon";
    p1[0] = 'F';
    printf("Klingon");
    printf("AA the %ss!\n", "Klingon");
    getchar();
    return 0;
}

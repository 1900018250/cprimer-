#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char a[] = "How Are you";
    char b[100] = "Ou holle";
    printf("%d\n", strlen(a));
    strcat(b, a);
    puts(b);
    strncat(b, a, 3);
    puts(b);
    puts(b);
    getchar();
    return 0;
}

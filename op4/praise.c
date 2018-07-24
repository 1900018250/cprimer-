/* 乳沟不识别%zd 用%u / %lu */
#include<stdio.h>
#include<string.h>
#define PRAISE "You are yes"

int main(void)
{
    char name[40];
    printf("What's you name?\n");           
    scanf("%s", name);
    printf("Hello, %s.%s\n", name, PRAISE);
    printf("You name of %zd letters occupies %zd memory cells.\n", strlen(name), sizeof name);
    printf("The phrase of praise has %zd letters", 
    strlen(PRAISE));
    printf("and occupies %zd memory cells\n", sizeof PRAISE);
    return 0;
}

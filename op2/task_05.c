#include<stdio.h>

void br(void);
void ic(void);

int main(void)
{
    ic();
    printf(" ");
    br();
    printf("\n");
    ic();  
    printf("\n");
    br();
    printf("\n");
}

void br(void)
{
    printf("Brazil, Russia");
}

void ic(void)
{
    printf("India, China");
}

/* �鿴�����洢������ */
#include<stdio.h>
#include<stdlib.h>

void mikado(int);

int main(void)
{
    system("chcp 65001");
    int pooh = 2, bah = 5;
    printf("���� ����: %d, ��ַ %p\n", pooh, &pooh);
    printf("���� �������� %d, ��ַ: %p\n", bah, &bah);
    mikado(bah);
    getchar();
    return 0;
}

void mikado(int bah)
{
    int pooh = 10;
    printf("���� ����: %d, ��ַ %p\n", pooh, &pooh);
    printf("���� �������� %d, ��ַ: %p\n", bah, &bah);
}

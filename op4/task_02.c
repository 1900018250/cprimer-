#include<stdio.h>
#include<string.h>

int main()
{
    char full[20], name[20];
    printf("输入你的姓名：\n");
    scanf("%s %s", full, name);
    printf("\"%s,%s\"\n", name, full);
    printf("\"%20s%20s\"\n", name, full);
    printf("\"%-20s%-20s\"\n", name, full);
    printf("%*s, %*s\n", strlen(name) + 3, name, strlen(full) + 3 , full);
    return 0;

}

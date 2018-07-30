#include <stdio.h>
#define STLEN 10

char * s_gets(char * st, int n);
//sddd
int main(int argc, char const *argv[])
{
    char words[STLEN];
   // puts("enter empty line to quit");
   // while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
   //     fputs(words, stdout);
   // puts("Done");
    //s_gets(words, STLEN);
    fgets(words, STLEN, stdin);

    puts(words);
//    getchar();
    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
//        printf("%d\n", i);
        if (st[i] == '\n')
            st[i] = '\0';
        else
        {
            while (getchar() != '\n')
            {
  //              putchar('\n');
                continue;
            }
        }
    }
    return ret_val;
}

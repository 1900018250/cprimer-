#include<stdio.h>
#include<limits.h>

int main()
{
   int max = INT_MAX;
   int max_max;
   printf("int max is %d\n", max);
   max_max = max + 100000000;
   printf("max_max is %d\n", max_max);
   return 0;
}

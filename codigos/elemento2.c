#include <stdio.h>
#include <stdlib.h>
int main()
{
 int n[10], i;
 for(i=0; i <= 9; i++)
 n[i] = 0;
 printf("%s%13s\n", "Elemento", "Valor");
 for (i=0; i<=9 ; i++)
 printf("%7d%13d\n", i, n[i]);
 return 0;
}


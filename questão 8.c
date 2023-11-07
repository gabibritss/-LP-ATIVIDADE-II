#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
      int n=0;
      int i=0;

   printf ("digite um número: ");
   scanf("%d", &n);

   for (i = n; i >=0; i--)
   {
        printf("%d\n",n);
        n = n - 1;
   }
   

   return 0;
}
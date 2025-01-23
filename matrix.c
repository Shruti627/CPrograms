#include <stdio.h>
int main()
{
   int r, c, i, j;
   int a[10][10];
   printf("\nEnter no of rows : ");
   scanf("%d", &r);
   printf("\nEnter no of columns : ");
   scanf("%d", &c);
   for (i = 0; i < r; i++)
   {
      for (j = 0; j < c; j++)
      {
         scanf("%d", &a[i][j]);
      }
      printf("\n");
   }
   printf("\nDisplay Matrix :\n");
   for (i = 0; i < r; i++)
   {
      for (j = 0; j < c; j++)
      {
         printf(" %d", a[i][j]);
      }
      printf("\n");
   }

   return 0;
}
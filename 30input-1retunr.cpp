#include<stdio.h>

int main() 
{
   int h, m,H,M;
   scanf("%d %d", &h, &m);

   if (h > 0 && h <= 23)
   {
      if (m >= 45){
	  
         M = m - 45;
         printf("if if\n");}

      else if (m < 45){
	  
         M = m + 15;
         printf("if elseif\n");}

      H = h - 1;
   }

   else if (h <= 0)
   {
      if (m >= 45)
      {
      	printf("elseif if\n");
         M = m - 45;
         H = h;
      }
      else if (m < 45)
      {
      	printf("elseif elseif\n");
         M = m + 15;
         H = h + 23;
      }
   }

   printf("%d %d\n", H, M);

   return 0;
}

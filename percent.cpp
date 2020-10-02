#include <stdio.h>

int main(void)
{
   char str1[5] = "ABCD";
   char str2[5] = "1234";
   char str3[9] ="가나다라";
   char str4[10];

   for (int i = 0; i < 5; i++)
      printf("str1[%d] = %c \n", i, str1[i]);
   
   for (int i = 0; i < 5; i++)
      printf("str2[%d] = %d \n", i, str2[i]);

   for (int i = 0; i < 8; i+=2)
      printf("str3[%d] = %c%c \n", i, str3[i],str3[i+1]);


}

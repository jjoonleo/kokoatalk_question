#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
main() {
   int i, j, k, num, sum;
   char op;
   printf("for(f) , while(w), do-while(d) 입력 : ");
   scanf("%c", &op);
   printf("정수 n 입력 : ");
   scanf("%d", &num);
   switch (op) {
   case 'f':
      for (i = 1; i <= num; i++) {
         sum = 0;
         for (j = 1; j <= i; j++) {
            printf("%d", j);
            sum = sum + j;
         }
         for (k = 1; k <= sum; k++) printf("*");
         printf("\n");
      }
      break;
   case 'w':
      i = 1;
      while (i <= num) {
         sum = 0;
         j = 1;
         while (j <= i) {
            printf("%d", j);
            sum = sum + j;
            j++;
         }
         k = 1;
         while (k <= sum) {
            printf("*");
           
            k++;
         } 
		 i++;
		 printf("\n");
     }
         break;
   case 'd':
      i = 1;
      while (i <= num) {
         sum = 0;
         j = 1;
         do {
            printf("%d", j);
            sum = sum + j;
            j++;
         } while (j <= i);
         k = 1;
         do {
            printf("*");
            k++;
         } while (k <= sum);
         i++;
         printf("\n");
         
      }
		break;

   }

    return 0;
}

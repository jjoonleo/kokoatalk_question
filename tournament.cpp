#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>   
#include<stdlib.h>
#include<math.h>

int main(void) {

   int N = 0, length = 0;
   int count = 0, max_cnt = 100;
   int score[100] = { 0, },sdlfk = 99999999;

   scanf("%d", &N);
   getchar();
   if (N < 1 || N>100) {
      printf("ERROR\n");
      exit(1);
   }
   for (int i = 0; i < N; i++) {
      scanf("%d", &score[i]);
      if (score[i] > 100 || score[i] < 1) {
         printf("ERROR\n");
         exit(1);
      }
   }
   for (int i = 0;; i++) {
      if (pow(2, i) <= N && N <= pow(2, i + 1)) {
         length = i;
         break;
      }
   }

   for (int i = 0; i <= length; i++) {
      count = 0;
      if (i == 0) {
         for (int j = 0;; j++) {
            if (score[2 * j] >= score[2 * j + 1] && score[2 * j] != 0 && score[2 * j + 1] != 0) {
               score[count] = score[2 * j];
               count++;
            }
            else if (score[2 * j] < score[2 * j + 1]) {
               score[count] = score[2 * j + 1];
               count++;
            }
            else if (score[2 * j] != 0 && score[2 * j + 1] == 0) {
               score[count] = score[2 * j];
               count++;
               //max_cnt = count / 2;
               //if (count % 2 != 0) max_cnt++;
                printf("else else if\n");
               break;
            }
            else if (score[2 * j] == 0 && score[2 * j + 1] == 0){
			 printf("else else els if\n");break;}
         }
         max_cnt = count / 2;
         if (count % 2 != 0) max_cnt++;
         for (int j = count; j < 100; j++) {
            score[j] = 0;
         }
      }
      else {
         for (int j = 0; j < max_cnt; j++) {
            if (score[2 * j] >= score[2 * j + 1] && score[2 * j] != 0 && score[2 * j + 1] != 0) {
               score[count] = score[2 * j];
               count++;
            }
            else if (score[2 * j] < score[2 * j + 1]) {
               score[count] = score[2 * j + 1];
               count++;
            }
            else if (score[2 * j] != 0 && score[2 * j + 1] == 0) {
               score[count] = score[2 * j];
               count++;
               break;
            }
         }
         for (int j = count; j < 100; j++) {
            score[j] = 0;
         }
         max_cnt = count / 2;
         if (count % 2 != 0) max_cnt++;
      }
      for (int j = 0; j < count; j++) {
         if (j == 0) printf("%d", score[j]);
         else printf(" %d", score[j]);
      }
      if (i < length) printf("\n");
   }
   return 0;
}

//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 89 100


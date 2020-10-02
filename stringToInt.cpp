#pragma warning(disable:4996)
#include <stdio.h>
#include <math.h>

int MAX(int* ar);
int MIN(int* ar);

int main() {
   int N;
   char T[100],*p,*s=NULL;
   int num=0,cnt=0;

   scanf("%d", &N);
	scanf("%c");
   for (p = T; p < T + N; p++) {
      scanf("%c", p);
   }

   for (p = T; p < T + N; p++) {
      if (*p >= 'A' && *p <= 'Z' || *p >= 'a' && *p <= 'z') printf("%c", *p);
      else {
         cnt++;
         if (cnt == 1) s = p;
         if (*(p+1) >= 'A' && *(p+1) <= 'Z' || *(p+1) >= 'a' && *(p+1) <= 'z' || *(p+1) == NULL) {
         	for (int i = 0; i < cnt; ++i) {
         		num += (*(s+i)-48) * pow(10, cnt - i - 1);
      		}
      		cnt = 0;
		 }
  	}      
   }printf("\n%d\n", num);
}

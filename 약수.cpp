#include<stdio.h>

int main(){
   int N, sum= 0;
   printf("숫자 입력: ");
   scanf("%d", &N);
   for(int i = 1; i <= N; i+=2){
      sum+=i;
}
printf("%d\n", sum);
}

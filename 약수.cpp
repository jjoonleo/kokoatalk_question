#include<stdio.h>

int main(){
   int N, sum= 0;
   printf("���� �Է�: ");
   scanf("%d", &N);
   for(int i = 1; i <= N; i+=2){
      sum+=i;
}
printf("%d\n", sum);
}

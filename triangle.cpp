#include<stdio.h>

int main(void){
	int N;
	scanf("%d",&N);
	for(int i = N; i > 0; i--){
		for(int j = 0; j < N - i;j++){
			printf(" ");
		}
		for(int j = 0; j < i; j++){
			printf("*");
			printf(" ");
		}
		printf("\n");
	}
	for(int i =1;i<101;i++){
		printf("%d ",i);
	}
	return 0;
}

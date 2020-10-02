#include<stdio.h>

int main(){
	int number[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int F,R,M;
	int change_n=0;
	
	scanf("%d %d %d", &F,&R,&M);
	change_n = number[R];
	for(int i = R; i > R - M; i--){
		number[i] = number[i-1];
	}
	number[R-M+1] = change_n;
	for(int i = 0; i < 20; i++){
		printf("%d ", number[i]);
	}
	return 0;
}

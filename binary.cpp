#include<stdio.h>

int main(){
	int a;
	int input;
	
	printf("\n정수입력 : ");
	scanf("%d", &input);
	printf("%d의 32bit 표현 : ",input);
	for(int num = 31; num >=0; num--){
		a = 1 << num;
		
		
		printf("%d",input & a ? 1 : 0);
	}
}

#include<stdio.h>

int main(){
	int a;
	int input;
	
	printf("\n�����Է� : ");
	scanf("%d", &input);
	printf("%d�� 32bit ǥ�� : ",input);
	for(int num = 31; num >=0; num--){
		a = 1 << num;
		
		
		printf("%d",input & a ? 1 : 0);
	}
}

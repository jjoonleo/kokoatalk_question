#include<stdio.h>
bool IsPrime(int n);
int getEnd();
int main(){
	int end = 0;
	int sum = 0, avr= 0, num = 0;
	while(1){
		sum = 0, avr= 0, num = 0;
		end = getEnd();
		if(end <= 0){
			return 0;
		}
		for(int i = 2; i <= end; i++){
			if(IsPrime(i)){
				sum+=i;
				num+=1;
			}
		}
		printf("소수의 갯수: %d\n", num);
		printf("소수의 합: %d\n",sum);
		printf("소수의 평균: %f\n",(double)sum/(double)num);
	}
}
bool IsPrime(int n){
	for(int i = 2; i <= n/2;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int getEnd(){
	int i;
	printf("end값(2이상의 정수)을 입력하시요. 끝내려면 0을 입력하세요:\n");
	scanf("%d",&i);
	return i;
}

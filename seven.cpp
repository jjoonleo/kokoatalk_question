#include<stdio.h>

int main(){

	unsigned int in = 38755935673;
	//scanf("%d",&in);
	while(in<10){
		in = in/10 - 2*(in%10);
	}
	if(in%7 == 0){
			printf("7의 배수 입니다.");
		}
	else{
		printf("7의 배수가 아닙니다.");
	} 
	
	return 0;
}

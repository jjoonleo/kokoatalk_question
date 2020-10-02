#include<stdio.h>
#include <time.h>

int main(){
	clock_t start, end;
	unsigned int in=38755935673;
	//scanf("%d",&in);
	start = clock();
	if(in%7 == 0){
			printf("7의 배수 입니다.");
		}
	else{
		printf("7의 배수가 아닙니다.");
	} 
	end = clock();
	float result = (double)(end - start);
	printf("%f", result);
	
	return 0;
}

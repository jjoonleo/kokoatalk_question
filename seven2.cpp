#include<stdio.h>
#include <time.h>

int main(){
	clock_t start, end;
	unsigned int in=38755935673;
	//scanf("%d",&in);
	start = clock();
	if(in%7 == 0){
			printf("7�� ��� �Դϴ�.");
		}
	else{
		printf("7�� ����� �ƴմϴ�.");
	} 
	end = clock();
	float result = (double)(end - start);
	printf("%f", result);
	
	return 0;
}

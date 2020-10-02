#include<stdio.h>

int main(){
	int n; 
	int count = 1;
	scanf("%d",&n);
	
	for(int i = n; i >= 10; i/=10){
		count *= 10;
	}
	for(count; count >= 0 ; count/=10){
		//printf("%d ", n/count);
		switch (n/count){
			case 0:
				printf("zero ");
				break;
			case 1:
				printf("one ");
				break;
			case 2:
				printf("two ");
				break;
			case 3:
				printf("three ");
				break;
			case 4:
				printf("four ");
				break;
			case 5:
				printf("five ");
				break;
			case 6:
				printf("six ");
				break;
			case 7:
				printf("seven ");
				break;
			case 8:
				printf("eight ");
				break;
			case 9:
				printf("nine ");
				break;
			default:
				break;
		}
		n -= n/count*count;
	}
}

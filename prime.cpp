#include<stdio.h>

int main(){
	int n;
	int check = 1;
	scanf("%d",&n);
	for(int i = 2; i*i < n;i++){
		if(n%i==0){
			check = 0;
		}
	}
	if(check == 1){
		printf("It is a prime number.");
	}
}

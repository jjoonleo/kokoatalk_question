#include<stdio.h>
int num_digit(unsigned int N);
int convert_top(unsigned int N,int digit);
int convert_bottom(unsigned int N);
int main(){
	unsigned int N;
	scanf("%d",&N);
	if(num_digit(N) % 2 == 0)convert_bottom(N);
	else convert_top(N, num_digit(N));
}
int num_digit(unsigned int N){
	if(N < 10)return 1;
	return num_digit(N/10)+1;
}
int convert_top(unsigned int N,int digit){
	if(digit < 0) return 0;
	int devide = 1,prt,ret;
	for(int i = 1; i <= digit - 2; ++i) devide*=10;
	prt = N / devide;
	ret = N%devide;
	if(num_digit(N) <= digit - 2) N = 0;
	if((prt >= 65 && prt <= 90)||(prt >= 97 && prt <= 122)) printf("%c", prt);
	else printf("*");
	return convert_top(ret,digit - 2);
}
int convert_bottom(unsigned int N){
	if(N == 0) return 0;
	int prt = N % 100;
	if((prt >= 65 && prt <= 90)||(prt >= 97 && prt <= 122)) printf("%c", prt);
	else printf("*");
	return convert_bottom(N/100);
}

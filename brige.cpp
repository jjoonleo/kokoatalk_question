#include<stdio.h>
int main(){
	int a, b, c, d;
	printf("네명이 각각 다리를 건너는데 걸리는 시간을 입력하세요");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("\n");
	if(a - 2*b + c > 0){
		printf("최소시간은 %d 입니다.",a+3*b+d);
	}
	else{
		printf("최소시간은 %d 입니다.",2*a+b+c+d);
	}
}

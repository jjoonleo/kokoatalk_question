#include<stdio.h>

int main (){
	int arr[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int country[4] = {0,1000000,800000,500000};
	int rM, rD;
	int des;
	int preD = 15;
	int result =0, saleStatus = 0;
	printf("출국일은 10월 15일 입니다.\n");
	printf("예약일을 입력하세요(월 일): ");
	scanf("%d%d", &rM, &rD);
	printf("\n도착지 번호: 1.미국, 2.영국, 3.중국\n");
	printf("도착지를 입력하세요(번호): ");
	scanf("%d",&des);
	
	preD += arr[rM] - rD;
	for(int i = rM + 1; i < 10; i++){
		preD += arr[i];
	} 
	if(preD >= 200){
		result = country[des]/100*90;
		saleStatus = 10;
	}
	else if(preD >= 100){
		result = country[des]/100*95;
		saleStatus = 5;
	}
	else{
		result = country[des]/100*3;
		saleStatus = 3;
	}
	printf("\n%d월 %d일 에 예약하면\n",rM, rD);
	printf("%d일 전으로 할인율은 %d(%%)입니다.\n", preD, saleStatus);
	printf("항공권 요금은 %d 원입니다.",result);
	return(1);
	
}

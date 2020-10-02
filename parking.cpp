#include<stdio.h>

int main(){
	int m1, d1, m2, d2;
	int fare = 0;
	int tmp = 0;
	printf("입차일을 입력하세요.(월 일): ");
	scanf("%d%d",&m1,&d1);
	printf("출차일을 입력하세요.(월 일): ");
	scanf("%d%d",&m2,&d2);
	
	fare += (d2-d1);
	fare += 30 * (m2-m1);
	tmp += ((m2-m1)/2 + 1) * (m1%2) * (m2%2);
	tmp += ((m2-m1)/2) * !(m1%2) * !(m2%2);
	tmp += ((m2-m1)/2+1) * (!tmp);
	fare += tmp;
	
	
	
	printf("총 주차 기간은 %d 일이고,\n", fare);
	
	
	fare *= 3000;
	fare -= ((fare-199*3000)/10) * (fare >= 200 * 3000);
	printf("주차 요금은 %d 원입니다.", fare);
}

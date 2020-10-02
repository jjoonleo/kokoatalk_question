#include<stdio.h>

int toSec(int h, int m, int s) {
	return h * 3600 + m * 60 + s;
}
struct work {
	int H, M, S, h, m, s;
	int sum;
};
int main() {
	struct work worker1;
	struct work worker2;
	int H, M, S;

	printf("근로자1의 시작시간의 시간, 분, 초, 종료시간의 시, 분, 초를 순서대로 입력하시오\n");
	scanf("%d%d%d%d%d%d", &worker1.H, &worker1.M, &worker1.S, &worker1.h, &worker1.m, &worker1.s);
	printf("근로자2의 시작시간의 시간, 분, 초, 종료시간의 시, 분, 초를 순서대로 입력하시오\n") ;
	scanf(" %d%d%d%d%d%d", &worker2.H, &worker2.M, &worker2.S, &worker2.h, &worker2.m, &worker2.s);

	worker1.sum = toSec(worker1.h, worker1.m, worker1.s) - toSec(worker1.H, worker1.M, worker1.S);
	worker2.sum = toSec(worker2.h, worker2.m, worker2.s) - toSec(worker2.H, worker2.M, worker2.S);
	M = worker1.sum / 60 + worker2.sum / 60;
	H = M / 60;
	S = worker1.sum % 60 + worker2.sum % 60;
	M = M % 60;
	printf("총 근무시간 %d시간 %d분 %d초", H, M, S);
	
}



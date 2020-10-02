
#include <stdio.h>
#include <stdlib.h>
 /*
int* MAX(int ar[]);
int MIN(int ar[]);
 
int main() {
	int N, ar[100], * p, min2;
	int *min, *max;
	int cnt;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {//배열에 값 넣어주기
		for (p = ar; p < ar + 100; p++) {
			scanf("%d", p);
			if (*p == 0)
				break;
		}
		//조건에 따라 최대최소값 출력
		
		min2 = MIN(ar);printf("2%d %d\n",min2, max);
		for(p = ar; p < ar+100; p++){
			if(min2 = *p){
				min = p;
				break; 
			}
		}
		max = MAX(ar);
		printf("%d %d\n",min, max);
		if (min == max)
			printf("none");
		else if (min > max)
			for (p = max + 1; p < min; p++)
				printf("%d ", *p);
		else
			for (p = min + 1; p < max; p++)
				printf("%d ", *p);
		printf("\n");
	}
 
}
 
int* MAX(int ar[]) {
	int* p;
	int* key = ar;
	for (p = ar + 1; p < ar + 100; p++) {
		if(*p==0)
			break;
		if(*key < *p)
			key = p;
	}
	return key;
}
 
 
int MIN(int ar[]) {
	int* p;
	int key = 1234567890;
	for (p = ar; p < ar + 100; p++) {
		if (*p == 0)
			break;
		if (key > *p)
			key = *p;
	}
	return key;
}*/
/*int* MAX(int ar[]);
int MIN(int ar[]);
 
int main() {
	int N, ar[100], * p;
	//int cnt;
	int* add;
	int min, *max;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {//배열에 값 넣어주기
		for (p = ar; p < ar + 100; p++) {
			scanf("%d", p);
			if (*p == 0)
				break;
		}
		//printf("%d\n", *ar);
		//조건에 따라 최대최소값 출력
		max = MAX(ar);
		min = MIN(ar);
		printf("%d\n", *ar);
		for (p = ar; p < ar + 100; p++) {//최솟값과 값이 같을시 주소 반환
			if (*p == min)
				add = p;
			if (*p == 0)
				break;
		}
 		
 		
		if (add == max)//최솟값과 최댓값이 같을때
			printf("none");
		else if (add > max)//최댓값이 앞에 있을 때
			for (p = max + 1; p < add; p++)
				printf("%d ", *p);
		else//최솟값이 앞에 있을 때
			for (p = add + 1; p < max; p++)
				printf("%d ", *p);
		printf("\n");
	}
 
}
 
int* MAX(int ar[]) {//가장 큰 값을 가진 원소의 주소 반환
	int* p;
	int* key = ar;
	for (p = ar+1; p < ar + 100; p++) {
		//printf("MAX %d %d\n", *key, *p);
		if(*p==0)
			break;
		if (*key < *p)
			key = p;
	}
	return key;
}
 
 
int MIN(int ar[]) {//가장 작은 정수 반환
	int* p;
	int *key = ar;
	int ret;
	for (p = ar; p < ar + 100; p++) {
		if (*p == 0)
			break;
		if (*key > *p)
			ret = *p;
	}
	return ret;
}*/
int* MAX(int ar[]);
int MIN(int ar[]);
 
int main() {
	int ar[100], * p;
	int N;
	int tmp, *max;
	int *min;
	scanf("%d", &N);
	getchar();
	for (int i = 0; i < N; i++) {
		for (p = ar; p < ar + 100; p++) {
			scanf("%d", p);
			if (*p == 0)
				break;
		}
		//OJ에서 안됨
		printf("%d\n", *ar);
		max = MAX(ar);
		tmp = MIN(ar);
 		
		for (p = ar; p < ar + 100; p++) {
			if (*p == 0)
				break;
			if (*p == tmp)
				min = p;
		}
 
		if (abs(min - max) <= 1)
			printf("none");
		else if (min > max)
			for (p = max + 1; p < min; p++)
				printf("%d ", *p);
		else
			for (p = min + 1; p < max; p++)
				printf("%d ", *p);
		printf("\n");
	}
}
 
int* MAX(int ar[]) {
	int* p = ar;
	int key = *p, * pp=NULL;
	
	for (; p < ar + 100; p++) {
	printf("MAX %d %d\n", key, *p);
		if (*p == 0)
			break;
		if (key < *p) {
			key = *p;
			pp = p;
		}
	}
	if (pp == NULL)
		pp = ar;
		printf("%d\n", *pp);
	return pp;
}
 
int MIN(int ar[]) {
	int* p = ar;
	int key = *p;
	int* pp=NULL;
	for (; p < ar + 100; p++) {
		if (*p == 0)
			break;
		if (key > * p) {
			key = *p;
			pp = p;
		}
	}
	p = ar;
	if (pp == NULL)
		key = *p;
 
	return key;
}

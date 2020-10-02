#include<stdio.h>

int main() {

    int a;
    int c = 1;
    printf("2 부터n(입력) 까지의 소수를 구하자.");
    printf("\n2 보다 큰 상한값 정수 n을 입력>> ");
    scanf("%d", &a);
    printf("\n2 부터 %d 까지의 소수는 >>>>", a);
    for (int n = 2; n<= a;n++) {
    	c = 1;
        for (int i = 2; i <= n/2;i++) {
            if (n % i == 0) {
                c = 0;
            }
           if (c == 1) {
            printf("%d", n);
        	}
        } 
		
    } 
    return 0;
}

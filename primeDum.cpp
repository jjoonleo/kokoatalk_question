#include<stdio.h>

int main() {

    int a;
    int c = 1;
    printf("2 ����n(�Է�) ������ �Ҽ��� ������.");
    printf("\n2 ���� ū ���Ѱ� ���� n�� �Է�>> ");
    scanf("%d", &a);
    printf("\n2 ���� %d ������ �Ҽ��� >>>>", a);
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

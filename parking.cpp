#include<stdio.h>

int main(){
	int m1, d1, m2, d2;
	int fare = 0;
	int tmp = 0;
	printf("�������� �Է��ϼ���.(�� ��): ");
	scanf("%d%d",&m1,&d1);
	printf("�������� �Է��ϼ���.(�� ��): ");
	scanf("%d%d",&m2,&d2);
	
	fare += (d2-d1);
	fare += 30 * (m2-m1);
	tmp += ((m2-m1)/2 + 1) * (m1%2) * (m2%2);
	tmp += ((m2-m1)/2) * !(m1%2) * !(m2%2);
	tmp += ((m2-m1)/2+1) * (!tmp);
	fare += tmp;
	
	
	
	printf("�� ���� �Ⱓ�� %d ���̰�,\n", fare);
	
	
	fare *= 3000;
	fare -= ((fare-199*3000)/10) * (fare >= 200 * 3000);
	printf("���� ����� %d ���Դϴ�.", fare);
}

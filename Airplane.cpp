#include<stdio.h>

int main (){
	int arr[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int country[4] = {0,1000000,800000,500000};
	int rM, rD;
	int des;
	int preD = 15;
	int result =0, saleStatus = 0;
	printf("�ⱹ���� 10�� 15�� �Դϴ�.\n");
	printf("�������� �Է��ϼ���(�� ��): ");
	scanf("%d%d", &rM, &rD);
	printf("\n������ ��ȣ: 1.�̱�, 2.����, 3.�߱�\n");
	printf("�������� �Է��ϼ���(��ȣ): ");
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
	printf("\n%d�� %d�� �� �����ϸ�\n",rM, rD);
	printf("%d�� ������ �������� %d(%%)�Դϴ�.\n", preD, saleStatus);
	printf("�װ��� ����� %d ���Դϴ�.",result);
	return(1);
	
}

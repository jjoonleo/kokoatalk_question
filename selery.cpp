#include<stdio.h>

int main(){
	int salery;
	printf("�����Է�:");
	scanf("%d",&salery);
	printf("\t�Է��� ����:\t%d\n\n",salery);
	if(salery - 88000000 > 0){
		printf("\t���� 35%%:\t %d\n", (salery - 880000000)*35/100);
		printf("\t���� 24%%:\t 10100000\n");
		printf("\t���� 15%%:\t 5100000\n");
		printf("\t����  6%%:\t 720000\n");
		printf("\t��ü ������ : \t%d�Դϴ�.\n",(salery - 880000000)*35/100+15920000);
	}
	else if(salery - 46000000 > 0){
		printf("\t���� 24%%:\t %d\n",(salery - 46000000)*24/100);
		printf("\t���� 15%%:\t 5100000\n");
		printf("\t����  6%%:\t 720000\n");
		printf("\t��ü ������ : \t%d�Դϴ�.\n",(salery - 46000000)*24/100+5820000);
	}
	else if(salery - 12000000 > 0){
		printf("\t���� 15%%:\t %d\n",(salery - 12000000)*15/100);
		printf("\t����  6%%:\t 720000\n");
		printf("\t��ü ������ : \t%d�Դϴ�.\n",(salery - 12000000)*15/100+720000);

	}
	else{
		printf("\t����  6%%:\t %d\n", salery*6/100);
		printf("\t��ü ������ : \t%d�Դϴ�.\n",salery*6/100);

	}
}

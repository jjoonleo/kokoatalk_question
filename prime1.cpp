#include<stdio.h>
bool IsPrime(int n);
int getEnd();
int main(){
	int end = 0;
	int sum = 0, avr= 0, num = 0;
	while(1){
		sum = 0, avr= 0, num = 0;
		end = getEnd();
		if(end <= 0){
			return 0;
		}
		for(int i = 2; i <= end; i++){
			if(IsPrime(i)){
				sum+=i;
				num+=1;
			}
		}
		printf("�Ҽ��� ����: %d\n", num);
		printf("�Ҽ��� ��: %d\n",sum);
		printf("�Ҽ��� ���: %f\n",(double)sum/(double)num);
	}
}
bool IsPrime(int n){
	for(int i = 2; i <= n/2;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int getEnd(){
	int i;
	printf("end��(2�̻��� ����)�� �Է��Ͻÿ�. �������� 0�� �Է��ϼ���:\n");
	scanf("%d",&i);
	return i;
}

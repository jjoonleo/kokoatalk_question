#include<stdio.h>
int main(){
	int a, b, c, d;
	printf("�׸��� ���� �ٸ��� �ǳʴµ� �ɸ��� �ð��� �Է��ϼ���");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("\n");
	if(a - 2*b + c > 0){
		printf("�ּҽð��� %d �Դϴ�.",a+3*b+d);
	}
	else{
		printf("�ּҽð��� %d �Դϴ�.",2*a+b+c+d);
	}
}

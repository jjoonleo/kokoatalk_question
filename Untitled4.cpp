#include<stdio.h>

int main(){
	int num[3] ={0,};
	int score[3][3] = {0,};
	
	for(int i = 0; i<3; i++){
		printf("��ȣ >>");
		scanf("%d",&num[i]);
		for(int j =0; j<3;j++){
			printf("���� %d >>",j+1);
			scanf("%d",&score[i][j]);
		}
	}
	printf(" ============== ���� ���===============\n");
	printf(" ��ȣ  ����1  ����2  ����3   ����  ���\n");
	for(int i = 0; i < 3; i++){
		printf(" %3d    ",num[i]);
		for(int j =0; j<3;j++){
			printf("%3d    ",score[i][j]);
		}
		printf("%3d    ",score[i][0]+score[i][1]+score[i][2]);
		printf("%3d",(score[i][0]+score[i][1]+score[i][2])/33);
		printf("\n");
	}
	
}

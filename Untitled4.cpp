#include<stdio.h>

int main(){
	int num[3] ={0,};
	int score[3][3] = {0,};
	
	for(int i = 0; i<3; i++){
		printf("번호 >>");
		scanf("%d",&num[i]);
		for(int j =0; j<3;j++){
			printf("과목 %d >>",j+1);
			scanf("%d",&score[i][j]);
		}
	}
	printf(" ============== 성적 출력===============\n");
	printf(" 번호  과목1  과목2  과목3   총점  평균\n");
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

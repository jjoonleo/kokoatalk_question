#include<stdio.h>

int main(){
	int salery;
	printf("연봉입력:");
	scanf("%d",&salery);
	printf("\t입력한 연봉:\t%d\n\n",salery);
	if(salery - 88000000 > 0){
		printf("\t세금 35%%:\t %d\n", (salery - 880000000)*35/100);
		printf("\t세금 24%%:\t 10100000\n");
		printf("\t세금 15%%:\t 5100000\n");
		printf("\t세금  6%%:\t 720000\n");
		printf("\t전체 세금은 : \t%d입니다.\n",(salery - 880000000)*35/100+15920000);
	}
	else if(salery - 46000000 > 0){
		printf("\t세금 24%%:\t %d\n",(salery - 46000000)*24/100);
		printf("\t세금 15%%:\t 5100000\n");
		printf("\t세금  6%%:\t 720000\n");
		printf("\t전체 세금은 : \t%d입니다.\n",(salery - 46000000)*24/100+5820000);
	}
	else if(salery - 12000000 > 0){
		printf("\t세금 15%%:\t %d\n",(salery - 12000000)*15/100);
		printf("\t세금  6%%:\t 720000\n");
		printf("\t전체 세금은 : \t%d입니다.\n",(salery - 12000000)*15/100+720000);

	}
	else{
		printf("\t세금  6%%:\t %d\n", salery*6/100);
		printf("\t전체 세금은 : \t%d입니다.\n",salery*6/100);

	}
}

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int N;//������ ��� �����ϴ� ����
	
	scanf("%d",&N);//������ ��� �Է�
	int*arr = (int*)malloc(sizeof(int)*N); //��� ��ŭ�� ������ �迭 ���� 
	int length = N;
	
	for(int i = 0; i < N; i++){
		scanf("%d",&arr[i]);//������ ���� ���� �Է� �� �� 
	}
	while(length>2){//���̰� 2���� Ŭ������(2�� ����ؾ� �ϴϱ�) 
		for(int i = 0; i < length; i+=2){
			if((arr[i]+arr[i+1]) %2 ==0){//�Ѵ� Ȧ���ų� �Ѵ� ¦���� ū���� �� �� 
				printf("%d %d\n",arr[i],arr[i+1]);
				if(arr[i]<arr[i+1]) arr[i/2] = arr[i+1];
				else arr[i/2] = arr[i];
			}
			else{//�ƴϸ� �������� �̱�  
				if(arr[i]>arr[i+1]) arr[i/2] = arr[i+1];
				else arr[i/2] = arr[i];
				
			}
			arr[i+1]=0;
		}
		if(arr[length-1] != 0){//�����ڼ��� Ȧ���� ���� �� 
			printf("l %d\n",length);
			arr[length/2] = arr[length-1];
			length += 1;
		}
		length/=2;
	}
	printf("%d %d",arr[0] , arr[1]);//1��� 2�� ��ȣ �� �� 
}

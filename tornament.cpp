#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int N;//참가자 명수 저장하는 변수
	
	scanf("%d",&N);//참가자 명수 입력
	int*arr = (int*)malloc(sizeof(int)*N); //명수 만큼의 길이의 배열 생성 
	int length = N;
	
	for(int i = 0; i < N; i++){
		scanf("%d",&arr[i]);//참가자 별로 숫자 입력 받 기 
	}
	while(length>2){//길이가 2보다 클때까지(2개 출력해야 하니까) 
		for(int i = 0; i < length; i+=2){
			if((arr[i]+arr[i+1]) %2 ==0){//둘다 홀수거나 둘다 짝수면 큰수가 이 김 
				printf("%d %d\n",arr[i],arr[i+1]);
				if(arr[i]<arr[i+1]) arr[i/2] = arr[i+1];
				else arr[i/2] = arr[i];
			}
			else{//아니면 작은수가 이김  
				if(arr[i]>arr[i+1]) arr[i/2] = arr[i+1];
				else arr[i/2] = arr[i];
				
			}
			arr[i+1]=0;
		}
		if(arr[length-1] != 0){//참가자수가 홀수면 부전 승 
			printf("l %d\n",length);
			arr[length/2] = arr[length-1];
			length += 1;
		}
		length/=2;
	}
	printf("%d %d",arr[0] , arr[1]);//1등과 2등 번호 출 력 
}

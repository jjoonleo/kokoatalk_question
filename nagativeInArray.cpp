#include<stdio.h>
#include<stdlib.h>

int main(){
	int N, sum= 0;
	int nagative = 1;
	int s = 0;
	int max=1;
	scanf("%d",&N);
	int *arr = (int*)malloc(sizeof(int)*N);
	for(int i = 0; i < N; i++){
		scanf("%d",&arr[i]);
	}
	sum = arr[0];
	for(int i = 0; i< N-1; i++){
	
		if(arr[i]*arr[i+1]<0){
			nagative++;
		}else{
			
			if(nagative>max){
				max = nagative;
				s = i;
			}
			
				
			nagative = 1;
		}
	}
	printf("%d\n",max);
	for(int i = s - max+1; i <= s; i++){
		printf("%d ",arr[i]);
	}
}


#include<stdio.h>

int sum(int(&arr)[20],int n);
int max(int a, int b){
	return a>b?a:b;
}
int main(){
	int n;
	int arr[20];
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	printf("%d",sum(arr,n-1));
	//printf("%d",sum(n));
}
int sum(int(&arr)[20], int n){
	if(n == 0){
		return arr[0];
	}
	return max(sum(arr,n-1), arr[n]);
	
	return 0;
}

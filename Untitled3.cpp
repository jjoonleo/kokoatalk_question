#include<stdio.h>
#define MAX 100
#define LINEITEM 10

int main(){
	bool arr[MAX+1] = {0,};

	for(int u = 2*2; u <=MAX; u=+2){
		arr[u] = 1;
	}
	for(int u = 2*3; u <=MAX; u=+3){
		arr[u] = 1;
	}
	for(int u = 2*5; u <=MAX; u=+5){
		arr[u] = 1;
	}
	
}

#include<stdio.h>

void lower(char str[20], int n){
	int i = 0;
	for(i = 0; i < n; i++){
		if(str[i]>='A' &&str[i] <= 'Z') str[i]=str[i]+32;
		i++;
	}
	printf("%s\n",str);
}
int main(){
	int n =0;
	char str[20];
	scanf("%s %d",str,&n);
	lower(str, n);
	return 0;
}

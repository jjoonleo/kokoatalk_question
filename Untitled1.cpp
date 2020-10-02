#include<stdio.h>
  int fact(int a)
{
	if(a <= 1){
		return a;
	}
   return a * fact(a-1);
}

int main(){
	int a = 10;
	printf("%d",fact(a));
	
}

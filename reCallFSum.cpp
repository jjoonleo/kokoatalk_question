#include<stdio.h>


int je(int n);
int main() {
	int n = 20;
	for (n = 1; n <= 20; n++) {
		printf("%d", je(n));
	}
	return 0;
}

int je(int n) {
	
	if (n >= 0) {
		return(n+je(n-1));
	}
	else {
		return 0;
	}
	
}

#include<stdio.h>
#include <stdlib.h>
#include<time.h>

void random(int n);
int main() {
    int n;
    scanf("%d", &n);
    random(n);

    return 0;
}

void random(int n)
{
	srand((unsigned int)time(NULL));
    int i,number;
    for (i = 0;i < 6;i++) {
        number = rand()%n+1;
        printf("%5d\n", number);
    }
}

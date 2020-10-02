#include<stdio.h>
int get_DanNum(){
	int dan;
	printf("출력할 구구단의 단수를 입력하세요\n");
	scanf("%d",&dan);
	return dan;
}
void print_Dan(int dan){
	for (int i = 2; i <= 9; i++) 
      printf("%d*%d = %d\n", dan, i, dan * i);
}

int main(){
	int dan = get_DanNum();
	print_Dan(dan);
}

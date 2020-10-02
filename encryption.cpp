#include<stdio.h>
#include<conio.h>

char decrypt(char ch, int M);
char encrypt(char ch, int M);
int main(){
	char str[1000];int str_len = 0;
	char c;
	int M1, M2;
	for(int i = 0; ;i++){
		c=_getch();					//문자 받 기 
		//printf("%c",c);
		if(c=='*') {				//*면 길이 저장하고 break; 
			str_len = i;
			printf("\n");
			break;
		}
		/*else if(c==8){
			str[i - 1] = '\0';
			if(i>0)
				i-=2;
			printf(" \b");
		} */
		*(str+i )= c;
	}
	scanf("%d %d",&M1,&M2);
	for(int i = 0; i <= str_len; i++){			//decrypt
		str[i] = decrypt(str[i], M1);
	}
	printf("%s\n",str);
	for(int i = 0; i <= str_len; i++){			//encrypt
		str[i] = encrypt(str[i], M2);
	}
	printf("%s",str);
	
}

char encrypt(char ch, int M){
	while(M>26) M-=26;
	if(ch+M > 122 && ch <= 122 && ch >= 97)				//a~z이고 범위넘어갈 때 
		ch = 96+(ch+M-122);
	
	else if(ch+M > 90 && ch <= 90 && ch >= 65) 			//A~Z이고 범위 넘어갈때  
		ch = 64+(ch+M-90);
	
	else if((ch <= 90 && ch >= 65)||(ch <= 122 && ch >= 97)) ch+=M;
	return ch;
}
char decrypt(char ch, int M){
	while(M>26) M-=26;
	if(ch-M < 97 && ch <= 122 && ch >= 97)		//a~z이고 범위넘어갈 때
		ch = 122-(96-ch+M);
	
	else if(ch-M < 65 && ch <= 90 && ch >= 65) 		//A~Z이고 범위 넘어갈때 
		ch = 90-(64-ch+M);
	
	else if((ch <= 90 && ch >= 65)||(ch <= 122 && ch >= 97))
		ch-= M;
	
	return ch;
}

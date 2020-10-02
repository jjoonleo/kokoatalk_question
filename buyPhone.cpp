#include <stdio.h>
#include <string.h>

struct phone {
   char model[20];

   char color[10];

   int contract;
};

void option(struct phone isOK) {   

	int Ok = 0;
	
   printf("색상을 골라주세요: \n");

   printf("****************** \n");

   printf("보유 색상: 티탄,실버,레드\n");

   scanf("%s", isOK.color, sizeof(isOK.color));

   printf("계약 약정을 골라주세요: \n");

   scanf("%d", &isOK.contract, sizeof(isOK.contract));

    

      printf("구매확인서 \n");

   printf("*********************\n");
   
   printf("기종: %s \n 색상: %s \n 약정: %d \n 맞으면 1번을 아니면 2번을 눌러주세요!",isOK.model, isOK.color, isOK.contract);

   scanf("%d", &Ok);

    

      if (Ok == 1) {

         printf("결제를 진행하겠습니다.");

      }

      else if (Ok == 2) {

         printf("결제진행이 취소되었습니다.");

      }

}
 
 

int main(void)

{

   struct phone a1;

    

      printf("구매하고싶은 기종을 골라주세요: \n");

   printf("*********************************** \n");

   printf("보유제품: Galaxy a90, Galaxy s20, Galaxy Note10, V50, Iphone11\n");

   gets(a1.model);//??? ??? ??? ?? ???? scanf ??? ??? gets_s ??? ???????. 

    

       

      if (!strcmp(a1.model, "Galaxy a90")) {

   option(a1);
}

      else if (!strcmp(a1.model, "Galaxy s20")) {

      option(a1);
}

      else if (!strcmp(a1.model, "Galaxy Note10")) {

      option(a1);
}

      else if (!strcmp(a1.model, "V50")){

         option(a1);}

      else if (!strcmp(a1.model, "Iphone11")) {

      option(a1);
}

      else {

      printf("보유제품이 아닙니다..");
         }
    

}

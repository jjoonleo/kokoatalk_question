#include <stdio.h>
#include <string.h>

struct phone {
   char model[20];

   char color[10];

   int contract;
};

void option(struct phone isOK) {   

	int Ok = 0;
	
   printf("������ ����ּ���: \n");

   printf("****************** \n");

   printf("���� ����: Ƽź,�ǹ�,����\n");

   scanf("%s", isOK.color, sizeof(isOK.color));

   printf("��� ������ ����ּ���: \n");

   scanf("%d", &isOK.contract, sizeof(isOK.contract));

    

      printf("����Ȯ�μ� \n");

   printf("*********************\n");
   
   printf("����: %s \n ����: %s \n ����: %d \n ������ 1���� �ƴϸ� 2���� �����ּ���!",isOK.model, isOK.color, isOK.contract);

   scanf("%d", &Ok);

    

      if (Ok == 1) {

         printf("������ �����ϰڽ��ϴ�.");

      }

      else if (Ok == 2) {

         printf("���������� ��ҵǾ����ϴ�.");

      }

}
 
 

int main(void)

{

   struct phone a1;

    

      printf("�����ϰ���� ������ ����ּ���: \n");

   printf("*********************************** \n");

   printf("������ǰ: Galaxy a90, Galaxy s20, Galaxy Note10, V50, Iphone11\n");

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

      printf("������ǰ�� �ƴմϴ�..");
         }
    

}

#include<stdio.h>

int main() {

   int a[100], i, cnt = 0, flag = 0;  
   int n;   

   scanf("%d", &n);
  

   for (i = 0; i < n; i++) {
      scanf("%d", &a[i]);
      if (a[i] > 100 || a[i] < 0) {  
         flag++;
         break;
      }
   }

   if (flag == 0) { 
      while (n != 1) {
         for (i = 0; i < n/2; i++) { 
         	
            if (a[i*2] < a[i*2 + 1])a[cnt] = a[i*2 + 1]; 
            else a[cnt] = a[i*2]; 
            printf("%d ",a[cnt]);
            cnt++;
         }
		 if(n % 2 == 1){
		 	a[cnt] = a[n-1];
			printf("%d ", a[cnt]);
			n = (n / 2)+1;
		 	cnt++;
		 }else n = n/2;
		 
         printf("\n");
         cnt = 0;
      }


   }

   else
      printf("ERROR");  




   return 0;
}

#include <stdio.h>
int main()
{
    int a, a1, b, b1,i;
    char d;

    do
    {
        printf("분모를 입력하세요: ");
        scanf("%d%d", &a, &b);
        printf("분자를 입력하세요: ");
        scanf("%d%d", &a1, &b1);
        int c = (a1 * b + a * b1);
        int c1 = (a * b);
        int g;
        for (i = 1;i <= c1;i++)
        {
            if (c % i == 0 && c1 % 1 == 0)
                 g= i;
        }
        
        printf("결과:%d/%d + %d/%d = %d/%d\n", a1, a, b1, b,c/g ,c1/g);
        printf("계속하려면 c를 입력하세요 :");
        scanf(" %c", &d);
    } while (d =='c');

    return 0;
}

#include <stdio.h>
int main()
{
    int a, a1, b, b1,i;
    char d;

    do
    {
        printf("�и� �Է��ϼ���: ");
        scanf("%d%d", &a, &b);
        printf("���ڸ� �Է��ϼ���: ");
        scanf("%d%d", &a1, &b1);
        int c = (a1 * b + a * b1);
        int c1 = (a * b);
        int g;
        for (i = 1;i <= c1;i++)
        {
            if (c % i == 0 && c1 % 1 == 0)
                 g= i;
        }
        
        printf("���:%d/%d + %d/%d = %d/%d\n", a1, a, b1, b,c/g ,c1/g);
        printf("����Ϸ��� c�� �Է��ϼ��� :");
        scanf(" %c", &d);
    } while (d =='c');

    return 0;
}

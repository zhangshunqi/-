#include <stdio.h>
int main()
{
    int a, b, c, min;
    printf("��������������:\n");
    scanf("%d%d%d", &a, &b, &c);
    min = a;
    if (b < min)
    {
        min = b;
    }
    if (c < min)
    {
        min = c;
    }printf("��Сֵ��:%d\n",min);
    return 0;
}

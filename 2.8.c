#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0, b = 0, c = 0;
    int num;
    float sumpos = 0;
    float sumneg = 0;
    float averpos =0.0, averneg = 0.0;
    printf("������20������: \n");
    for (int i = 0; i < 20; i ++)
    {
        scanf("%d", &num);
        if (num > 0)
        {
            a ++ ;
            sumpos += num;
        }
        if (num < 0)
        {
            b ++ ;
            sumneg += num;
        }
        if (num == 0)
        {
            c ++ ;
        }

    }
    if (a > 0) averpos = sumpos / a;
    else averpos = 0;
    if (b > 0) averneg = sumneg / b;
    else averneg = 0;
    printf("��������ƽ��ֵΪ: %.2f,��������ƽ��ֵΪ: %.2f,��������: %d,��������: %d, ����: %d\n", averpos, averneg, a, b, c);
    return 0;
}

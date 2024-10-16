#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0, b = 0, c = 0;
    int num;
    int sumpos = 0;
    int sumneg = 0;
    float averpos =0.00, averneg = 0.00;
    printf("请输入20个整数: \n");
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
    printf("正整数的和: %d, 负整数的和:%d\n", sumpos, sumneg);
    printf("正整数的数量为：%d，平均值为：%.2f, 负整数的数量为：%d，平均值为：%.2f, 零的数量为：%d\n", a, averpos, b, averneg, c);
    return 0;
}

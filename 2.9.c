#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int numposmax = INT_MIN, numposmin = INT_MAX, numnegmax = INT_MIN, numnegmin = INT_MAX, num;
    printf("请输入 20 个整数：\n");
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &num);
        if (num > 0)
        {
            numposmax = num;
            numposmax = num;
            if (num > numposmax)
            {
                numposmax = num;
            }
            if (num < numposmin)
            {
                numposmin = num;
            }
        }
        else if (num < 0)
        {
            numnegmax = num;
            numnegmin = num;
            if (num > numnegmax)
            {
                numnegmax = num;
            }
            if (num < numnegmin)
            {
                numnegmin = num;
            }
        }
    }
    if (numposmax == INT_MIN)
    {
        printf("没有正整数输入。\n");
    }
    else
    {
        printf("最大正整数: %d\n最小正整数: %d\n", numposmax, numposmin);
    }
    if (numnegmax == INT_MIN)
    {
        printf("没有负整数输入。\n");
    }
    else
    {
        printf("最大负整数: %d\n最小负整数: %d\n", numnegmax, numnegmin);
    }
        return 0;
}

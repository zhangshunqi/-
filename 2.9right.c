#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int maxpos = 0;
    int minpos = 2147483647;
    int maxneg = -2147483647;
    int minneg = 0;
    int z = 0, s = 0;
    printf("������20��������\n");
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &num);
        if (num > 0)
        {
            s = 1;
            if (num > maxpos)
            {
                maxpos = num;
            }
            if (num < minpos)
            {
                minpos = num;
            }
        }
        if (num < 0)
        {
            z = 1;
            if (num > maxneg)
            {
                maxneg = num;
            }
            if (num < minneg)
            {
                minneg = num;
            }
        }
    }
    if (z == 1 && s == 1)
    {
        printf("���������: %d\n��С������: %d\n�������: %d\n��С������: %d\n", maxpos, minpos, maxneg, minneg);
    }
    if (z == 0 && s == 1)
    {
        printf("���������: %d\n��С������: %d\nû�и�����\n", maxpos, minpos);
    }
    if (z == 0 && s == 0)
    {
        printf("û���������븺����\n");
    }
    if (z == 1 && s == 0)
    {
        printf("�������: %d\n��С������: %d\nû��������\n", maxneg, minneg);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int numposmax = INT_MIN, numposmin = INT_MAX, numnegmax = INT_MIN, numnegmin = INT_MAX, num;
    printf("������ 20 ��������\n");
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
        printf("û�����������롣\n");
    }
    else
    {
        printf("���������: %d\n��С������: %d\n", numposmax, numposmin);
    }
    if (numnegmax == INT_MIN)
    {
        printf("û�и��������롣\n");
    }
    else
    {
        printf("�������: %d\n��С������: %d\n", numnegmax, numnegmin);
    }
        return 0;
}

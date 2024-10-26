#include<stdio.h>
int main()
{
    int num, max = -2147483648;
    char a;
    while (a != '\n')
    {
        scanf("%d%c", &num, &a);
        if (num > max)
        {
            max = num;
        }
    }
    printf("%d\n", max);
    return 0;
}

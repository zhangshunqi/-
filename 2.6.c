#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0;
    for (int i = 3; i <= 1000; i += 3)
    {
        sum += i;
    }
    printf("1000���ڵ���Ȼ����3�ı���֮��Ϊ:%d\n", sum);
    return 0;
}

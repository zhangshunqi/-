#include<stdio.h>
int main()
{
    char num[10086];
    fgets(num, sizeof(num), stdin);
    if (num[0] != '\n')
    {
        printf("���������:%s", num);
    }
    else
    {
        printf("��������ǿմ�!\n");
    }
    return 0;
}

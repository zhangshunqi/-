#include<stdio.h>
int main()
{
    char num[10086];
    fgets(num, sizeof(num), stdin);
    if (num[0] != '\n')
    {
        printf("你输入的是:%s", num);
    }
    else
    {
        printf("你输入的是空串!\n");
    }
    return 0;
}

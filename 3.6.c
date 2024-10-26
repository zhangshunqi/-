#include<stdio.h>
int main()
{
    int i =1;
    char num[100];
    scanf("%s", num);
    while (num[i] != '\0')
    {
        i ++;
    }
    char max = num[0];
    for(int a = 1;a < i;a ++)
    {
        if(num[a]>max)
        {
            max = num[a];
        }
    }
    printf("%c", max);
    return 0;
}

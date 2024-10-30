#include <stdio.h>

void fun(int a,int b,long *c)
{
    *c = (a%10)*1000+(b/10)*100+(a/10)*10+(b%10);
}

int main()
{
    int a,b;
    long c;
    scanf("%d%d",&a,&b);
    fun(a,b,&c);
    printf("%ld\n",c);
    return 0;
}

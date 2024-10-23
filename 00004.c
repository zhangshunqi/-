#include<stdio.h>
int main()
{
    int a;
    float t;
    scanf("%f%d", &t, &a);
    printf("%.3f\n%d", t / a, a * 2);
    return 0;
}

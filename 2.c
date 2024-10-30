#include<stdio.h>
int main()
{
    int x;
    int y=1;
    scanf("%d", &x);
    for(int j=1; j<=x; j++){
        y*=j;
    }
    printf("%d", y);
    return 0;
}

#include<stdio.h>
	int main(void)
	{
        int a, n;
        int num = 0, sum = 0;
        scanf("%d %d", &a, &n);
        for(int i = 0;i < n;i++){
            num = num*10+a;
            sum += num;

        }
        printf("%d", sum);

    return 0;
	}

#include<stdio.h>
	int main(void)
	{
        int a, n;
        int s = 0;
        int c = 1;
        scanf("%d", &n);
        if(n==0){
            printf("1");
        }
        else if(n < 0){
            printf("0");
        }
        else if(n == 1){
            printf("1");
        }
        else{
            for(int i = 1; i <= n; i++){
                a = i;
                for(int j = a; j > 1; j--){
                c *= j;
                }
                s = s + c;
                c = 1;
            }
            printf("%d", s);
        }
    return 0;
	}

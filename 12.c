#include<stdio.h>
	int main(void)
	{
        float a, b, num = 0;
        int i;
        float sum = 0;
        float bum = 0;
        for(i = 1; i <= 100; i++){
            if(i % 2 == 0){
                a = (1/(float)i);
                sum = sum + a;
            }
            else if(i % 2 != 0){
                b = (1/(float)i);
                bum = bum + b;
            }
        }
        num = bum - sum;
        printf("%.3f", num);
        return 0;
	}

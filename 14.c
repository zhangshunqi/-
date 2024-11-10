#include<stdio.h>
	int main(void)
	{
        char num[1000];
        int i = 0;
        int a=0, b=0, c=0, d=0, e=0, f=0;
        fgets(num, 1000, stdin);
        while(num[i] != '\n'){
            if (num[i] == ' '){
                a++;
            }
            else if(num[i] >= 'A' && num[i]<= 'Z'){
                b++;
            }
            else if(num[i] >='a' && num[i] <= 'z'){
                c++;
            }
            else if(num[i] >= '0' && num[i] <= '9'){
                d++;
            }
            else{
                e++;
            }
            i++;


        }
    f = b+c;
    printf("%d %d %d %d", f, d, a, e);
    return 0;
	}

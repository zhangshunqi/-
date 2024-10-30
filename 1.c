#include<stdio.h>
int main()
{
    int n, a;
    int sum = 0;
    int num = 0;
    scanf("%d", &n);
    if (n>=37 && n%37 != 0) {
        a = n/37;
        for(int i=0 ; i<a; i++){
            num += 37;
            sum += num;
        }
        printf("%d", sum);
    }
    else if (n%37 == 0) {
        a = n/37;
        for(int i=0 ; i<a-1; i++){
            num += 37;
            sum += num;
        }
        printf("%d", sum);
    }
    else{
        printf("%d", n/37);
    }
    return 0;
}

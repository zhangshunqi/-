#include <stdio.h>

int main(void) {
    int n;
    int a = 1;
    scanf("%d", &n);

    int temp = n;
    while (temp > 0) {
        int b = temp % 10;
        a *= b;
        temp /= 10;
    }

    printf("%d\n", a);

    return 0;
}

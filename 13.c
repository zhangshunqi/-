#include <stdio.h>

int main() {
    int a, b, c, d, n;
    while (scanf("%d %d", &a, &b)!= 2) {
        while (getchar()!= '\n');
    }
    c = a;
    d = b;
    while (d!= 0) {
        n = c % d;
        c = d;
        d = n;
    }
    int num = a * b / c;
    printf("���Լ����:%d\n", c);
    printf("��С��������:%d\n", num);

    return 0;
}

#include <stdio.h>
int main() {
    int n = 7;
    int x = n / 2;
    for (int i = 0; i < x + 1; i++) {
        for (int a = 0; a < x - i; a++) {
            printf(" ");
        }
        for (int b = 0; b < 2 * i + 1; b++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 0; i--) {
        for (int a = 0; a < n - i; a++) {
            printf(" ");
        }
        for (int b = 0; b < 2 * i + 1; b++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main(){
    int n;
    char s;
    while(scanf("%d %c\n", &n, &s)==2){
        for(int i = 0;i < n-1;i++){
            for(int a = 0;a<2*i+1;a++){
                printf("%c", s);
            }
            for(int b = 0;b<2*n-1-i;b++){
                printf(" ");
            }
            printf("\n");
        }
        for(int i = 0;i<2*n-1;i++){
            printf("%c", s);
        }
        printf("\n");
        for(int i = n-1;i > 0;i--){
            for(int a = 0;a<2*i-1;a++){
                printf("%c", s);
            }
            for(int b = 0;b<2*n-1-i;b++){
                printf(" ");
            }
            printf("\n");
        }
        printf("\n\n");
    }
    return 0;
}

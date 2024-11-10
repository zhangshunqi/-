#include<stdio.h>
int main(){
    int a, b, c;
    int n = 0;
    while(scanf("%d%d%d", &a,&b,&c)==3){
        if(a+b == c){
            n++;
        }
    }
    printf("%d", n);
    return 0;
}

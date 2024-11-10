#include<stdio.h>
int main(){
    int n, num;
    while(scanf("%d", &num)==1){
        n = num;
        int a = 0;
        do{
            a = a*10+n%10;
            n = n/10;
        }while(n > 0);
        if(a == num){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    }
    return 0;
}

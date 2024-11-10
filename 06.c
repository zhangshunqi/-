#include<stdio.h>
#include<math.h>
int main(){
    int A, B;
    while(scanf("%d %d\n", &A, &B) == 2){
        int a = 0;
        for(int n = 1;n <= 10000; n++){
            if(sqrt(n+A)==(int)(sqrt(n+A)) && sqrt(n+B)==(int)(sqrt(n+B))){
            printf("%d\n", n);
            a = 1;
            break;
            }
        }
        if(!a){
            printf("Not found!\n");
        }

    }
    return 0;
}

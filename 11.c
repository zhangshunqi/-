#include<stdio.h>
#include<math.h>

int main()
{
	double x,f,t;
	int n;
	scanf("%lf", &x);
    f=1.0+x;
    t=x;
    n=1;
    do{
		n++;
        t*=x/(n);
        f += t;
	}while(fabs(t) >= 1e-6);
    printf("The result is :f=%-12.6f\n", f);
	return 0;
}

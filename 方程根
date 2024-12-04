#include<stdio.h>
#include<math.h>
int main()
{
    double x0 = 0.0;
    double x1 = 0.0;
    x0 = x1;
    x1 = cos(x0);
    while(fabs(x0 - x1) >= 0.000001){
        x0 = x1;
        x1 = cos(x0);
    }
    printf("root=%lf", x0);
	return 0;
}

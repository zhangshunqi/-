#include <stdio.h>
#include<math.h>

int main()
{
	int sum=0,n=0,j,yes,high;
	scanf("%d", &high);
	while((high>=2)&&(n<10))
	{
		yes=1;
		for(j=2;j<=sqrt(high);j++){
			if(high%j==0)
			{
				yes=0;
				continue;
			}
        }
		if(yes)
		{
			sum+=high;
			n++;
        }
		high--;
	}
	printf("sum=%d\n",sum);
	return 0;
}

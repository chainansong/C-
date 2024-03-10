#include"stdio.h"
main()
{
	int m,a,b;
	scanf("%d",&m);
	a=m/10%10;
	b=m%10;
	printf("%d%d",b,a);
}

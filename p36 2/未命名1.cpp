#include"stdio.h"
main()
{
	int x,y,z;
	x=10,y=12;
	z=x;
	x=y;
	y=z;
	printf("x=%d,y=%d",x,y);
}

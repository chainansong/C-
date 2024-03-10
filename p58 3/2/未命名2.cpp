#include"stdio.h"
main()
{
	char c1,c2,c3;
	c1=getchar();
	getchar();
	c2=getchar();
	getchar();
	c3=getchar();
	getchar();
	printf("%c%c%c\n",c1,c2,c3);
	printf("%d,%d,%d\n",c1,c2,c3);
	putchar(c3);
	putchar(c2);
	putchar(c1);
	
 } 

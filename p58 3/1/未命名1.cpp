#include"stdio.h"
main()
{char c1,c2,c3;//printf("请输入第一个字符:");
c1=getchar();//getchar();//接收回车符//printf("请输入第二个字符:");
c2=getchar();//getchar();//接收回车符//printf("请输入第三个字符:");
c3=getchar();//getchar();//接收回车符printf("%c,%d\n%c,%d\n%c,%d\n",c1,c1,c2,c2,c3,c3);
putchar(c3);
putchar(c2);
putchar(c1);
putchar('\n');
}

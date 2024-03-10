#include"stdio.h"
#define pi 3.14
main()
{
	float r,p,s;
	printf("请输入圆的半径：");
	scanf("%f",&r);
	p=2*pi*r;   //圆的周长
	s=pi*r*r;   //圆的面积
	printf("圆的周长：%f,圆的面积：%f\n",p,s); 
}

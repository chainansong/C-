#include"stdio.h" 
main()
{
	double price;
	int a;
	printf("价格\n");
	scanf("%lf",&price);
	printf("数量\n");
	scanf("%d",&a);
	printf("应付款：%.2f元\n",price*a);
}

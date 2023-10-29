/*1.求两个数的最大公因数*/
#include <stdio.h>
int main()
{
    int a,b,c,d;
	printf("请输入两个数：");
	scanf("%d %d",&a,&b);
	if(a<b)
	
	{
    c=b;
    b=a;
	a=c;
	}
	d=a%b;
	while(d!=0)
    {
    a=b;
	b=d;
	d=a%b;	
	}	
	printf("这两个数的最大公因数为%d",b);	
	return 0;
}
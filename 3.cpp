#include <stdio.h>
int main()
{
	char a[20];
	printf("请输入英文：");
	fgets(a, sizeof(a), stdin);
	a[0]=a[0]-32;
	printf("%s",a);
	return 0;
}
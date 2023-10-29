/*2.如果我只让你用一个字节的一个变量，存储8位数，请问如何如何把它提取出来这8个数，用循环*/
#include <stdio.h>
int main()
{
	int a=0,i=0;
	char s[8]="12345678";
	while (a<8)
	{
		printf("%c",s[i]);
		i++;
		a++;
	}
	return 0;
}
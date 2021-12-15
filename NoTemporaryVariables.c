#include <stdio.h>

int main()
{
	int a = 3;
	int b = 5;
	printf("%d %d\n", a, b);
	//有缺陷：如果整形值未超过最大范围，但两数之和超过最大范围则会出现丢失！（溢出）
	/*a = a + b;
	b = a - b;
	a = a - b;*/
	a = a ^ b;
	//011
	//101
	//110
	b = a ^ b;
	//110
	//101
	//011
	a = a ^ b;
	//110
	//011
	//101
	printf("%d %d\n", a, b);
	return 0;
}
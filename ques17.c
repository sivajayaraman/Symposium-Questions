#include <stdio.h>
void method(unsigned n)
{
	if(n > 1)
		method(n/2);
	printf("%d", n % 2);
}
int main(void)
{
	int x;
	scanf("%d",&x);
	method((unsigned)x);
	return 0;
}
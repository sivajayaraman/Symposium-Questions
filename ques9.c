#include <stdio.h>
#define d(m,m2) m##m2
int main()
{
	int var12=10;
	printf("%d\n", d(var,12) );
	return 0;
}
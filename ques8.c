#include <stdio.h>
int main()
{
	int a=(10,20);
	int b=(40,30);
	int c=((a--)*b,(--b)*a);
	printf("%d %d %d",a,b,c);
	return 0;
}
#include <stdio.h>
int main()
{
	int i,sum=0;
	for(i='a';i<=100;i++)
	{
		if(i%2==0)
		{
			switch(i)
			{
				case 'a' ... 'z':sum=sum+i;
				break;
			}
		}
	}
	printf("%d",sum);
}
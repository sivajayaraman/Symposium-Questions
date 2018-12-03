#include <stdio.h>
int method(int x)
{
   return (-(~x));
}
int main()
{
  int x;
  scanf("%d",&x);	
  printf("%d", method(x));
  return 0;
}
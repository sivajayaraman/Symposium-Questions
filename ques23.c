#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) 
{
 unsigned char cData=0xFc;
 int i =4;
 if(cData & (1<<i)) printf("\n\nBit is One");
 else printf("\n\nBit is zero");
 return 0;
}
#include <stdio.h>
#define MAX 10
int main()
{
    printf("%d",MAX);
    #define MAX 500
    printf(" %d",MAX);
    return 0;
}
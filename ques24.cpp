#include<stdio.h>
#include <iostream>
using namespace std;
int *check(static int i, static int j)
{
    int *p, *q;
    p = &i;
    q = &j;
    if(i >= 45)
        return (p);
    else
        return (q);
}
int main()
{
    int *c;
    c = check(10, 20);
    printf("%d\n", c);
    return 0;
}

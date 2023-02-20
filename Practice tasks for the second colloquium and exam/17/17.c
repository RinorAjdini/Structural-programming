#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#define MAX 100
int max(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int maksimalna(int n)
{
    if(n==0)
        return 0;
    return  max(n%10,maksimalna(n/10));
}
int main()
{
    int n;
    while(scanf("%d",&n))
    {
        printf("%d\n",maksimalna(n));
    }
    return 0;
}

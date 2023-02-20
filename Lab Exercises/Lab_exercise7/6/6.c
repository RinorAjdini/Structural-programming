#include <stdio.h>
#include <stdlib.h>

int nzd(int a, int b)
{
    if(a%b==0)
        return b;
    return nzd(b,a%b);
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",nzd(a,b));
    return 0;
}

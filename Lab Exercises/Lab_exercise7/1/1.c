#include <stdio.h>
#include <stdlib.h>

int func(int p)
{
    if(p<10)
        return 1;
    return ((p%10)<((p/10)%10))&(func(p/10));
}

int main()
{
    int n,k;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&k);
        printf("%d\n",func(k));
    }
    return 0;
}

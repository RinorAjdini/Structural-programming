#include <stdio.h>
#include <stdlib.h>

int proizvod(int n)
{
    if(n>10)
    {
        return n%10*proizvod(n/100);
    }
    else
        return n;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",proizvod(n/10));
    return 0;
}

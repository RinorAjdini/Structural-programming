#include <stdio.h>
#include <stdlib.h>

int rastecki(int n)
{
    if(n<10)
        return 1;
    if(n>99)
    {
        return ((n%10)>(n/10)%10)&&rastecki(n/10);
    }
    else
        return (n%10)>(n/10);
}

int main()
{
    int n,k;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&k);
        if(rastecki(k)==1)
            printf("DA\n");
        else
            printf("NE\n");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int sumOfDigits(int n,int k)
{
    if(n<10)
    {
        if(n%10>k)
        {
            printf("%d",n);
            return n;
        }
    }
    else
    {
        int zbir = sumOfDigits(n/10,k);
        if(n%10>k)
        {
            zbir+=n%10;
            printf("%d",n%10);
        }
        return zbir;
    }
}

int main()
{
    int n,zbir=0,m;
    scanf("%d%d",&m,&n);
    for(int i=0;i<n;i++)
    {
        int k;
        scanf("%d",&k);
        zbir=sumOfDigits(k,m);
        printf(" : %d\n",zbir);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int sumOfDigits(int n)
{
    if(n<10)
        return n;
    return n%10+sumOfDigits(n/10);
}

int main()
{
    int n,zbir=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int k;
        scanf("%d",&k);
        zbir+=sumOfDigits(k);
        printf("%d\n",sumOfDigits(k));
    }
    printf("%d",zbir);
    return 0;
}

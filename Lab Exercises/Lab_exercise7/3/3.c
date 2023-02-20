#include <stdio.h>
#include <stdlib.h>

int sumOfDigits(int n)
{
    if(n>10)
    {
        return n%10+sumOfDigits(n/100);
    }
    else
        return n;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",sumOfDigits(n/10));
    return 0;
}

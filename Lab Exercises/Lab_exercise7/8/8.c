#include <stdio.h>
#include <stdlib.h>

void printaj(int n)
{
    if(n==1)
        printf("1 ");
    else
    {
        printaj(n-1);
        printf("%d ",n);
    }

}

void triagolnik(int n)
{
    printaj(n);
    printf("\n");
    if(n>1)
        triagolnik(n-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    triagolnik(n);
    return 0;
}

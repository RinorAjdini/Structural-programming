#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x%3==0 && x%5==0)
        printf("Tik - Tak");

    else if (x%5==0)
        printf("Tak");
    else if(x%3==0)
        printf("Tik");
    else
        printf("Losh Broj");
    return 0;
}

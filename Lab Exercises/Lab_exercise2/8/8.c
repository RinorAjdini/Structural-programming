#include <stdio.h>
int main()
{
    long x;
    scanf("%ld",&x);
    int prva=x/1000000;
    int zbir=x%10+(x/10)%10;
    int vtora=(x/100000)%10;
    int special=0;
    if(prva==0 || zbir==0 || vtora==0)
    {
        printf("Nevaliden broj");
        return 0;
    }
    else
    {
        if((x%prva==0 && x%zbir!=0) || (x%vtora!=0 && x%zbir!=0))
            special=1;
    }
    if(special)
        printf("DA");
    else
        printf("NE");
    return 0;
}

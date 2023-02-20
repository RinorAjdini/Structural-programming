#include <stdio.h>
#include <math.h>
int main()
{
    char ch; int suma=0;
    while(scanf("%c",&ch))
    {   if(ch=='.')
            break;
        if(ch>='0' && ch<='9')
            suma+=ch-'0';
        else if((ch>='A' && ch<='F') ||(ch>='a' && ch<='f'))
        {
            if(ch>='A' && ch<='F')
                suma+=(ch-'A')+10;
            else
                suma+=(ch-'a')+10;
        }
    }
    if(suma%16==0)
        {
            if(suma%100==16)
                printf("Poln pogodok");
            else
                printf("Pogodok");
        }
    else
        printf("%d",suma);
    return 0;
}

#include <stdio.h>
#include <math.h>
int main()
{
    char ch;char previous;
    int suma=0; int ipari=0; int probnasum=0;
    while(scanf("%c",&ch))
    {
        if(ch=='!')
        {
            if(ipari==1)
            suma+=probnasum;
            break;
        }
       if(ch>='0' && ch<='9')
       {
           if(ipari==0)
           {
               ipari=1;
               probnasum=ch-'0';
               previous=ch;
           }
           else
           {
               ipari=0;
               suma+=(previous-'0')*10+ch-'0';
           }
       }
       else
       {
        if(ipari==1)
        {
        suma+=probnasum;
        probnasum=0;
        ipari=0;
        }
       }

    }
    printf("%d",suma);
    return 0;
}
